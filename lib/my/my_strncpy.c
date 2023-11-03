/*
** EPITECH PROJECT, 2023
** my_strncpy.c
** File description:
** Copies the n characters of a string
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i != n && n > 0; i++) {
        if (i < my_strlen(src)) {
            dest[i] = src[i];
        } else {
            dest[i] = '\0';
        }
    }
    return dest;
}
