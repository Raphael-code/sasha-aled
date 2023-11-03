/*
** EPITECH PROJECT, 2023
** my_miniprintf.c
** File description:
** Mini printf
*/

#include <stdarg.h>
#include <stddef.h>
#include "my.h"
#include "my_struct.h"


printf_results get_all_flags(const char *str, int *i)
{
    printf_results results;

    results.char_flags = get_char_flag(str, i);
    results.width = get_width(str, i);
    results.precision = get_precision(str, i);
    results.modifiers = get_length_modifier(str, i);
    results.flags = flag_finder(str, i);
    return results;
}

int print_results(const char *str, int *i, va_list ap)
{
    printf_results results = get_all_flags(str, i);
    char flag_result[30000] = "354";
    char *converted_string = NULL;
    
    converted_string = char_flag_handler(results, flag_result);
    
}

int my_printf(const char *str, ...)
{
    va_list ap;
    int char_count = 0;

    va_start(ap, str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%') {
            i++;
        } else {
            my_putchar(str[i]);
            char_count++;
        }
    }
    va_end(ap);
    return char_count;
}
