/*
** EPITECH PROJECT, 2023
** my_strncat.c
** File description:
** idk
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int counter = 0;

    for (int i = 0; dest[i] != '\0'; i++) {
        counter++;
    }
    for (int j = 0; src[j] != '\0' && j < nb; j++) {
        dest[counter] = src[j];
        counter++;
    }
    dest[counter] = '\0';
    return dest;
}
