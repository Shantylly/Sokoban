/*
** EPITECH PROJECT, 2020
** My_str_to_word_array
** File description:
** my str to word array main file
*/

#include <unistd.h>
#include <stdlib.h>

static int my_strlen(char *str)
{
    int size = 0;

    for (; str[size]; size++);
    return (size);
}

static int compare_str(char *str, char *dlm, int index)
{
    for (int i = 0; dlm[i] != 0 && str[index]; i++, index++)
        if (str[index] != dlm[i])
            return (0);
    return (1);
}

static int get_word_array_size(char *str, char *dlm)
{
    int size = 1;

    for (int i = 0; str[i]; i++)
        if (compare_str(str, dlm, i))
            size++;
    return (size);
}

void translate_to_word(char *str, char **result, int re, int *index)
{
    int size = 0;
    char *dlm = "\n";

    for (int i = *index ; !compare_str(str, dlm, i) && str[i]; i++, size++);
    result[re] = malloc(size + 1);
    for (int i = 0; i < size; result[re][i] = 0, i++);
    for (int i = 0; i < size; result[re][i] = str[*index], i++, *index += 1);
    if (str[*index] != '\0')
        *index += my_strlen(dlm);
    result[re][size] = '\0';
}

char **my_str_to_word_array(char *str, char *dlm)
{
    char **result;
    int index = 0;
    int total_size = 0;

    total_size = get_word_array_size(str, dlm);
    result = malloc(sizeof(char * ) * (total_size + 1));
    for (int i = 0; i <= total_size; result[i++] = NULL);
    for (int i = 0; i < total_size; i++)
        translate_to_word(str, result, i, &index);
    return (result);
}