/*
** EPITECH PROJECT, 2023
** my_strcat.c
** File description:
** Concatenates two strings
*/

//Malloc to avoid segfaults with uncompatible sizes
char *my_strcat(char *dest, char const *src)
{
    int counter = 0;

    for (int i = 0; dest[i] != '\0'; i++) {
        counter++;
    }
    for (int j = 0; src[j] != '\0'; j++) {
        dest[counter] = src[j];
        counter++;
    }
    dest[counter] = '\0';
    return dest;
}
