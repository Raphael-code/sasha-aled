/*
** EPITECH PROJECT, 2023
** my_revstr.c
** File description:
** Reverses a string
*/

#include "my.h"

void my_char_swap(char *str, int a, int b)
{
    char storage = str[a];

    str[a] = str[b];
    str[b] = storage;
}

char *my_revstr(char *str)
{
    int length = my_strlen(str);
    int counter = 0;

    for (int i = length - 1; i >= length / 2; i--) {
        my_char_swap(str, counter, i);
        counter++;
    }
    return str;
}
