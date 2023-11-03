/*
** EPITECH PROJECT, 2023
** my_strstr.c
** File description:
** Find a needle in a haystack
*/

#include <stddef.h>
#include "my.h"

int second_for_loop(int i, char *str, char const *to_find)
{
    int counter = 0;
    int needle_length = my_strlen(to_find);

    for (int j = 0; j != needle_length; j++) {
        if (str[j + i] == to_find[counter]) {
            counter++;
        } else {
            return 0;
        }
    }
    if (counter == needle_length) {
        return 1;
    }
    return 0;
}

char *my_strstr(char *str, char const *to_find)
{
    int needle_length = my_strlen(to_find);
    int result = 0;
    int i;

    if (needle_length == 0) {
        return &str[0];
    }
    for (i = 0; str[i] != '\0'; i++) {
        result = second_for_loop(i, str, to_find);
        if (result == 1) {
            return &str[i];
        }
    }
    return NULL;
}
