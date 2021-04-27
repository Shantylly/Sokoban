/*
** EPITECH PROJECT, 2020
** lib
** File description:
** headers for everything
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <assert.h>
#include <ncurses.h>
#include <sys/stat.h>
#include <sys/types.h>

int my_putstr(char const *str);
int my_puterr(char const *str);
int my_strcmp(char const *s1, char const *s2);
char **my_str_to_word_array(char *str, char *dlm);
char *getmap(char *filepath);
char **move_player(int direction, char **map);
int check_victory(char **map);
int check_defeat(char **map);

#endif /* !MY_H_ */
