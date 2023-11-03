/*
** EPITECH PROJECT, 2023
** my_putstr.c
** File description:
** Prints strngs based on my_putchar.c
*/

#include <unistd.h>

int my_putstr_err(char const *str)
{
    for (int i = 0; '\0' != str [i]; i++) {
        write(2, &str[i], 1);
    }
    return 0;
}
