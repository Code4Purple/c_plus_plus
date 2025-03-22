import components
import pygame

win_height = 720
win_width = 550
window = pygame.display.set_mode((win_width, win_height))

ground = components.Ground(win_width)
pipes = []


# Window Customization
title = pygame.display.set_caption("Flappy Bird.ai - Genetic Algorithm")
image = pygame.image.load("icon.png")
icon = pygame.display.set_icon(image)