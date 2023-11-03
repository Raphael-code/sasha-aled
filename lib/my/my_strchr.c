/*
** EPITECH PROJECT, 2023
** my_strchr.c
** File description:
** String search
*/

#include <stddef.h>

char *my_strchr(char *str, char *str_to_search)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        while (str_to_search[j] != '\0' && str_to_search[j] != str[i]) {
            j++;
        }
        if (str_to_search[j] == str[i]) {
            return &str[i];
        }
        i++;
        j = 0;
    }
    return NULL;
}
