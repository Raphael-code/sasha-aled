/*
** EPITECH PROJECT, 2023
** struct.h
** File description:
** Header
*/

#include <stdarg.h>

#ifndef PRINTF_STRUCTURE
    #define PRINTF_STRUCTURE
typedef struct printf_flags {
    char flag;
    int (*function)(va_list ap, int char_count);
} printf_flags;

typedef struct printf_len_modifier {
    char *mod;
    int (*function)(va_list ap, int char_count);
} printf_len_modifier;

typedef struct printf_char_flags {
    char char_flag;
    int (*function)(int char_count);
} printf_char_flags;

typedef struct printf_results {
    char char_flags;
    int width;
    int precision;
    printf_len_modifier *modifiers;
    printf_flags *flags;
} printf_results;
#endif /* PRINTF_STRUCTURE */
