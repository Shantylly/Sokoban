/*
** EPITECH PROJECT, 2021
** error
** File description:
** handle error and usage display
*/

#include "../include/my.h"

int usage(char *av)
{
    if (my_strcmp(av, "-h") == 0) {
        my_putstr("USAGE\n\t./my_sokoban map\nDESCRIPTION\n\t");
        my_putstr("map  file representing the warehouse map, ");
        my_putstr("containing ‘#’ for walls,‘P’ for the player, ");
        my_putstr("‘X’ for boxes and ‘O’ for storage locations.\n");
        return (0);
    }
    return (1);
}

int error(int ac, char **av)
{
    FILE *file;

    if (ac != 2) {
        my_puterr("Usage : ./my_sokoban map\n");
        return (1);
    }
    if (my_strcmp(av[1], "-h") == 0)
        return (0);
    if (file = fopen(av[1], "r"))
        fclose(file);
    else
        return (1);
    return (0);
}