/*
** EPITECH PROJECT, 2023
** my_strcapitalize.c
** File description:
** Capitalize each word
*/

char *conditions_checker(char *str, int i)
{
    if (str[0] >= 97 && str[0] <= 122) {
        str[0] = str[0] - 32;
    }
    if ((str[i] >= 32 && str[i] <= 47) &&
        (str[i + 1] >= 97 && str[i + 1] <= 122)) {
        str[i + 1] = str[i + 1] - 32;
    } else if ((str[i] >= 65 && str[i] <= 90) &&
        (str[i - 1] < 32 || str[i - 1] > 47)) {
        str[i] = str[i] + 32;
    }
}

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        conditions_checker(str, i);
    }
    return str;
}
