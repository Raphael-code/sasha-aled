/*
** EPITECH PROJECT, 2023
** my_str_isnum.c
** File description:
** Check if string is num
*/

int my_char_isnum(char c)
{
    if (c < 48 || c > 57) {
        return 0;
    }
    return 1;
}
