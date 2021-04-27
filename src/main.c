/*
** EPITECH PROJECT, 2020
** sokoban
** File description:
** main for sokoban
*/

#include "../include/my.h"

int error(int ac, char **av);

int usage(char *av);

char **direction(int ch, char **map)
{
    if (ch == KEY_LEFT)
        map = move_player(KEY_LEFT, map);
    if (ch == KEY_RIGHT)
        map = move_player(KEY_RIGHT, map);
    if (ch == KEY_UP)
        map = move_player(KEY_UP, map);
    if (ch == KEY_DOWN)
        map = move_player(KEY_DOWN, map);
    return (map);
}

int faster(char **map, int ch)
{
    clear();
    for (int i = 0; map[i] != 0; i++)
        printw("%s\n", map[i]);
    if (check_victory(map) == 1)
        return (0);
    if (check_defeat(map) == 1)
        return (1);
    ch = getch();
    map = direction(ch, map);
    refresh();
    return (2);
}

void fast(void)
{
    getch();
    endwin();
}

int main(int ac, char **av)
{
    int ret = 0;
    char **map;
    int ch = 0;
    WINDOW *win;

    if (error(ac, av) == 1)
        return (84);
    if (usage(av[1]) == 0)
        return (0);
    win = initscr();
    map = my_str_to_word_array(getmap(av[1]), "\n");
    keypad(stdscr, TRUE);
    curs_set(0);
    while (faster(map, ch) == 2);
    if (faster(map, ch) == 1)
        ret = 1;
    fast();
    return (ret);
}