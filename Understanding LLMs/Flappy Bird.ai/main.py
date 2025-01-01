import pygame
from sys import exit
import config
import components
import population

pygame.init()
clock = pygame.time.Clock()
population = population.Population(100)

def spawn_pipes():
    config.pipes.append(components.Pipes(config.win_width))

def quit_game():
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            exit()

def main():
    pipes_spawn_time = 10

    while True:
        quit_game()
        config.window.fill((0, 0, 0))
        
        # Spawn Ground
        config.ground.draw(config.window)
        
        # Spawn Pipes
        if pipes_spawn_time <= 0:
            spawn_pipes()
            pipes_spawn_time = 200
        pipes_spawn_time -= 1

        for pipe in config.pipes:
            pipe.draw(config.window)
            pipe.update()
            if pipe.off_screen:
                config.pipes.remove(pipe)
            if pipe.passed:
                config.pipes.remove(pipe)
        
        # Player
        if not population.extinct():
            population.update_live_players()
        else:
            pass
        
        clock.tick(60) # needs to be 60
        pygame.display.flip()

main()