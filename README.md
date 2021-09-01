# So Long
A small 2D game.

## 🗂 Table of Contents
* [About](#-about)
* [Getting Started](#-getting-started)
* [How to Play](#-how-to-play)
* [42 École | 42 São Paulo](#-42-école--42-são-paulo)

## 🧐 About
This is a small 2D game. This project is part of 42 École/ 42 SP curriculum.\
Topics such as windows, colors, events, textures, and others were addressed.

## 🏁 Getting Started
A Linux OS and the `gcc` compiler is needed.

#### ⚙️ Installing
To compile the game, clone the repo, and run the command `make`.
```
$ git clone https://github.com/filipebafica/so_long.git
$ cd so_long
$ make
```
This is going to generate an executable named `so_long`.

## 🎮 How to Play
Just run the executable passing one of the maps as the argument.
```
$ ./so_long map1.ber
```
#### 🚩 A Valid Map
The map must be composed of only 5 possible characters: `0` for an empty space, `1` for a wall, `C` for a collectible, \
`E` for map exit, and `P` for the player’s starting position. The map must be surrounded by walls.
```
1111111111111
10010000000C1
1000011111001
1P0011E000001
1111111111111
```

## 🏫 42 École | 42 São Paulo
42 École is a network of tech schools spread around the world where anyone can learn how to code for free.\
At 42 there are no teachers or classrooms, each student learns from and works with each other (peer-to-peer learning).\
To see more go to https://www.42.fr/ and https://www.42sp.org.br/.
