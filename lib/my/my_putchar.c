/*
** EPITECH PROJECT, 2023
** my_putchar.c
** File description:
** Function that help to display a result with the 'native' write function
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
