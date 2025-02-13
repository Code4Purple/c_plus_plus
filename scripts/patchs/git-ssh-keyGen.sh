#!/bin/bash


# Generate SSH key
ssh-keygen -t rsa -b 4096 -C "your_email@example.com"

# Cat the Key
cat ~/.ssh/id_rsa