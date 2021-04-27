/*
** EPITECH PROJECT, 2021
** checker
** File description:
** check victory or defeat
*/

#include "../include/my.h"

int check_victory(char **map)
{
    for (int y = 0; map[y] != 0; y++)
        for (int x = 0; map[y][x] != '\0'; x++)
            if (map[y][x] == 'O')
                return (0);
    return (1);
}

int check_defeat(char **map)
{
    for (int y = 0; map[y] != 0; y++)
        for (int x = 0; map[y][x] != '\0'; x++)
            if (map[y][x] == 'X' && ((map[y][x-1] == '#' && map[y+1][x] == '#')
            || (map[y][x+1] == '#' && map[y+1][x] == '#') ||
            (map[y][x-1] == '#' && map[y-1][x] == '#') ||
            (map[y][x+1] == '#' && map[y-1][x] == '#')))
                return (1);
    return (0);
}