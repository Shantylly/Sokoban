/*
** EPITECH PROJECT, 2021
** player
** File description:
** handle player move
*/

#include "../include/my.h"

char **left(char **map);

char **right(char **map);

char **up(char **map);

char **down(char **map);

int get_pposx(char **map)
{
    for (int y = 0; map[y] != 0; y++)
        for (int x = 0; map[y][x] != '\0'; x++)
            if (map[y][x] == 'P')
                return (x);
    return (0);
}

int get_pposy(char **map)
{
    for (int y = 0; map[y] != 0; y++)
        for (int x = 0; map[y][x] != '\0'; x++)
            if (map[y][x] == 'P')
                return (y);
    return (0);
}

char **move_player(int direction, char **map)
{
    if (direction == KEY_LEFT)
        map = left(map);
    if (direction == KEY_RIGHT)
        map = right(map);
    if (direction == KEY_UP)
        map = up(map);
    if (direction == KEY_DOWN)
        map = down(map);
    return (map);
}