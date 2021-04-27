/*
** EPITECH PROJECT, 2021
** getmap
** File description:
** get a map
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char *getmap(char *filepath)
{
    int map = open(filepath, O_RDONLY);
    char *buf;
    struct stat buffer;

    stat(filepath, &buffer);
    buf = malloc(sizeof(char) * buffer.st_size + 1);
    read(map, buf, buffer.st_size);
    buf[buffer.st_size] = 0;
    close(map);
    return (buf);
}