/*
** EPITECH PROJECT, 2021
** direction
** File description:
** handle move direction of player
*/

int get_pposx(char **map);

int get_pposy(char **map);

char **left(char **map)
{
    int x = get_pposx(map);
    int y = get_pposy(map);

    if (map[y][x-1] == '#' || (map[y][x-1] == 'X' && map[y][x-2] == '#') ||
    (map[y][x-1] == 'X' && map[y][x-2] == 'X'))
        return (map);
    else if (map[y][x-1] == 'X' && (map[y][x-2] == ' ' || map[y][x-2] == 'O')){
        map[y][x] = ' ';
        map[y][x-1] = 'P';
        map[y][x-2] = 'X';
    } else {
        map[y][x] = ' ';
        map[y][x-1] = 'P';
    }
    return (map);
}

char **right(char **map)
{
    int x = get_pposx(map);
    int y = get_pposy(map);

    if (map[y][x+1] == '#' || (map[y][x+1] == 'X' && map[y][x+2] == '#') ||
    (map[y][x+1] == 'X' && map[y][x+2] == 'X'))
        return (map);
    else if (map[y][x+1] == 'X' && (map[y][x+2] == ' ' || map[y][x+2] == 'O')){
        map[y][x] = ' ';
        map[y][x+1] = 'P';
        map[y][x+2] = 'X';
    } else {
        map[y][x] = ' ';
        map[y][x+1] = 'P';
    }
    return (map);
}

char **up(char **map)
{
    int x = get_pposx(map);
    int y = get_pposy(map);

    if (map[y-1][x] == '#' || (map[y-1][x] == 'X' && map[y-2][x] == '#') ||
    (map[y-1][x] == 'X' && map[y-2][x] == 'X'))
        return (map);
    else if (map[y-1][x] == 'X' && (map[y-2][x] == ' ' || map[y-2][x] == 'O')){
        map[y][x] = ' ';
        map[y-1][x] = 'P';
        map[y-2][x] = 'X';
    } else {
        map[y][x] = ' ';
        map[y-1][x] = 'P';
    }
    return (map);
}

char **down(char **map)
{
    int x = get_pposx(map);
    int y = get_pposy(map);

    if (map[y+1][x] == '#' || (map[y+1][x] == 'X' && map[y+2][x] == '#') ||
    (map[y+1][x] == 'X' && map[y+2][x] == 'X'))
        return (map);
    else if (map[y+1][x] == 'X' && (map[y+2][x] == ' ' || map[y+2][x] == 'O')){
        map[y][x] = ' ';
        map[y+1][x] = 'P';
        map[y+2][x] = 'X';
    } else {
        map[y][x] = ' ';
        map[y+1][x] = 'P';
    }
    return (map);
}