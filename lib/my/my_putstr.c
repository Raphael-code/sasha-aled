/*
** EPITECH PROJECT, 2023
** my_put_str.c
** File description:
** Prints char one by one
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i;

    for (i = 0; '\0' != str [i]; i++) {
        my_putchar(str[i]);
    }
    return i;
}
