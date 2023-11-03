/*
** EPITECH PROJECT, 2023
** my_str_is_alpha.c
** File description:
** Retunr if is alpha
*/

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < 65 || str[i] > 90) &&
            (str[i] < 97 || str[i] > 122) &&
            (str[i] < 48 || str[i] > 48)) {
            return 0;
        }
    }
    return 1;
}
