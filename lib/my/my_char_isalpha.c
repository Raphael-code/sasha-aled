/*
** EPITECH PROJECT, 2023
** my_str_is_alpha.c
** File description:
** Retunr if is alpha
*/

int my_char_isalpha(char c)
{
    if ((c < 65 || c > 90) &&
        (c < 97 || c > 122)) {
        return 0;
    }
    return 1;
}
