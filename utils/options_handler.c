/*
** EPITECH PROJECT, 2023
** B-CPE-101-PAR-1-1-myprintf-maxence.bunel
** File description:
** options_handler
*/

#include <stdarg.h>
#include <stddef.h>
#include "my_struct.h"
#include "my.h"

printf_flags *flag_finder(char const *str, int *i)
{
    int k = 0;
    printf_flags *FLAGS = flags_exporter();

    for (int j = *i; str[j] != '\0'; j++) {
        while (str[j] != FLAGS[k].flag && FLAGS[k].flag != 0) {
            k++;
        }
        if (str[j] == FLAGS[k].flag) {
            *i = j;
            return &FLAGS[k];
        }
    }
    return NULL;
}

printf_len_modifier *get_length_modifier(const char *str, int *i)
{
    int k = 0;
    printf_len_modifier *MODIFIERS = len_modifier_exporter();

    while (my_strchr(str[*i], "disc%ouxXeEfFgGaApnm") == 0 &&
            str[*i] != '\0') {
        while (str[*i] != MODIFIERS[k].mod && MODIFIERS[k].mod != 0) {
            k++;
        }
        if (str[*i] == 'l' && str[(*i)++] == 'l')
            return &MODIFIERS[3];
        if (str[*i] == 'h' && str[(*i)++] == 'h')
            return &MODIFIERS[0];
        if ((str[*i] == MODIFIERS[k].mod) &&
            (str[(*i)++] != 'l' && str[(*i)++] != 'h'))
            return &MODIFIERS[k];
        (*i)++;
    }
    return NULL;
}

int get_width(const char *str, int *i)
{
    int width = 0;

    while (my_isnum(str[*i] == 1)) {
        width = width * 10 + (str[(*i)++] - '0');
    }
    return width;
}

char get_char_flag(const char *str, int *i)
{
    char char_flags = 0;

    while (str[*i] != '\0' && my_strchr(str[*i], "-+0# ")) {
        char_flags |= str[(*i)++];
    }
    return char_flags;
}

int get_precision(const char *str, int *i)
{
    int precision = 0;

    if (str[*i] == '.') {
        (*i)++;
        while (my_isnum(str[*i])) {
            precision = precision * 10 + (str[(*i)++] - '0');
        }
    }
    return precision;
}
