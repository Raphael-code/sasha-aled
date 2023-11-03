/*
** EPITECH PROJECT, 2023
** my_strlen.c
** File description:
** Gives length of a string
*/

int my_strlen(char const *str)
{
    int counter = 0;

    for (int i = 0; '\0' != str[i]; i++) {
        counter++;
    }
    return counter;
}
