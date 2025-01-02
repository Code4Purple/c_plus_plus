import config
import player

class Population:
    def __init__(self, size):
        self.players = []
        self.size = size
        for i in range(size):
            self.players.append(player.Player())

    def update_live_players(self):
        for player in self.players:
            if player.alive:
                player.think()
                player.draw(config.window)
                player.update(config.ground)
    
    # Returns True if all players are dead
    def extinct(self):
        extinct = True
        for player in self.players:
            if player.alive:
                extinct = False
        return extinct