/*
** EPITECH PROJECT, 2023
** my_isneg.c
** File description:
** Function that checks if a number is negative or not
*/

#include "my.h"

int my_isneg(int n)
{
    if ( n < 0 ) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return 0;
}
