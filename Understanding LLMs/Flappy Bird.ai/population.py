import config
import player

class Population:
    def __init__(self):
        self.players = player.Player()

    def update_live_players(self):
        self.players.draw(config.window)