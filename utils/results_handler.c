/*
** EPITECH PROJECT, 2023
** B-CPE-101-PAR-1-1-myprintf-maxence.bunel
** File description:
** results_handler
*/

#include "my_struct.h"
#include <stddef.h>

char *char_flag_handler(printf_results results, char *str)
{
    char flags = results.char_flags;
    printf_char_flags *flags_array = char_flags_exporter();
    char *buffer = NULL;
    char res_str[30000];
    
    my_strcpy(res_str, str);
    for (int i = 0; flags_array[i].char_flag != 0; i++) {
        if (flags & flags_array[i].char_flag &&
            flags_array[i].function != NULL) {
            buffer = flags_array[i].function(str);
        }
        if (buffer != NULL) {
            my_strcpy(res_str, buffer);
        }
    }
    return res_str;
}

char *width_handler(printf_results results, char *str)
{
    int width = results.width;
    char fill_character = ' ';
    char res_str[30000];
    char buffer[width];

    my_strcpy(res_str, str);
    if (*zero_padded == 1 && *is_minus_flag == 0)
        fill_character = '0';
    for (int i = 0; i < width; i++) {
        buffer[i] = fill_character;
        if (*is_minus_flag == 0 && i == width - 1) {
            my_strcat(res_str, buffer);
        }
        if (*is_minus_flag == 1 && i == width - 1) {
            my_strcat(buffer, res_str);
        }   
    }
    return res_str;
}