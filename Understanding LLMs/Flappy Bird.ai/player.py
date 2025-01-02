import random
import pygame
import config
import brain


class Player:
    def __init__(self):
        # Bird properties
        self.x, self.y = 50, 200
        self.rect = pygame.Rect(self.x, self.y, 20, 20)
        self.color = random.randint(100, 255), random.randint(100, 255), random.randint(100, 255)
        self.vel = 0 # velocity
        self.flap = False 
        self.alive = True

        # AI
        self.decision = None
        self.vision = [0.5,1,0.5]
        self.inputs = 3
        self.brain = brain.Brain(self.inputs)
        self.brain.generate_net()

    # Game related functions
    def draw(self, window):
        pygame.draw.rect(window, self.color, self.rect)

    def ground_collision(self, ground):
        return pygame.Rect.colliderect(self.rect, ground)
    
    def sky_collision(self):
        return bool(self.rect.y < 30)
    
    def pipe_collision(self):
        for pipes in config.pipes:
            return pygame.Rect.colliderect(self.rect, pipes.top_rect) or \
                   pygame.Rect.colliderect(self.rect, pipes.bottom_rect)
            
    def update(self, ground):
        if not (self.ground_collision(ground) or self.pipe_collision()):
            # Gravity
            self.vel += 0.25
            self.rect.y += self.vel
            if self.vel > 5:
                self.vel = 5
        else:
            self.alive = False
            self.flap = False
            self.vel = 0

    def bird_flap(self):
        if not self.flap and not self.sky_collision():
            self.flap = True
            self.vel = -5
        if self.vel >= 3:
            self.flap = False

    @staticmethod
    def closest_pipe():
        for pipes in config.pipes:
            if not pipes.passed:
                return pipes

    # AI related functions
    def look(self):
        if config.pipes:
            # Line to top pipe
            self.vision[0] = max(0, self.rect.center[1] - self.closest_pipe().top_rect.bottom) / 500
            pygame.draw.line(config.window, self.color, self.rect.center, (self.rect.center[0], config.pipes[0].top_rect.bottom))

            # Line to mid pipe
            self.vision[1] = max(0, self.closest_pipe().x - self.rect.center[0]) / 500
            pygame.draw.line(config.window, self.color, self.rect.center,
                             (config.pipes[0].x, self.rect.center[1]))

            # Line to bottom pipe
            self.vision[2] = max(0, self.closest_pipe().bottom_rect.top - self.rect.center[1]) / 500
            pygame.draw.line(config.window, self.color, self.rect.center,
                             (self.rect.center[0], config.pipes[0].bottom_rect.top))

    def think(self):
        # https://youtu.be/zsGvCwaaMOI?t=2950
        self.decision = random.random()
        #print(self.decision)
        if self.decision > 0.73:
            self.bird_flap()
            #print("Flap", self.decision)