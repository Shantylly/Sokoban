# Sokoban

Sokoban game in terminal mode, using the ncurses library. 

If all boxes are on storage locations, the player wins and the program must return 0.

Otherwise, if none of the boxes can be moved anymore, he loses and the program must return 1.

The game is to be played with the arrow keys (LEFT, RIGHT, UP and DOWN).
A valid map can only contains the characters SPACE, ‘\n’, ‘#’, ‘X’, ‘O’ and ‘P’.


## USAGE
./my_sokoban map

## DESCRIPTION
map: file representing the warehouse map, containing ‘#’ for walls,‘P’ for the player, ‘X’ for boxes and ‘O’ for storage locations.
