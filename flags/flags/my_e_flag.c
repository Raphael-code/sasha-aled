/*
** EPITECH PROJECT, 2023
** printf
** File description:
** flag e
*/

#include "my.h"
#include <stdio.h>

int expo(int n)
{
    if (n < 10) {
        my_putchar('0');
    }
    return n;
}

int my_e_flag(double nb)
{
    int n = 0;

    if (nb > 0) {
        while (nb > 9) {
            nb = nb / 10;
            n = n + 1;
        }
        my_f_flag(nb);
        my_putstr("e+");
        my_put_nbr(expo(n));
    }
    if (nb < 0) {
        while (nb < -9) {
            nb = nb / 10;
            n = n - 1;
        }
        my_f_flag(nb);
        my_putstr("e-");
        my_put_nbr(expo(n));
    }
}
