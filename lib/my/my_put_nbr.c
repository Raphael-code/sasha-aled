/*
** EPITECH PROJECT, 2023
** my_put_nbr.c
** File description:
** Prints the exact input
*/

#include "my.h"

void my_putchar_counter(char c, int *count)
{
    write(1, &c, 1);
    (*count)++;
}

int neg_to_pos_nbr(int nb, int *count)
{
    if (nb == -2147483648) {
        nb = nb - 1;
        my_putchar_counter('-', count);
    } else if (nb < 0) {
        nb = nb * -1;
        my_putchar_counter('-', count);
    }
    return nb;
}

int is_maximum_number(int nb)
{
    int need_to_add_1 = 0;

    if (nb == -2147483648) {
        need_to_add_1 = 1;
    }
    return need_to_add_1;
}

void recursive_loop(int nb, int store_number, int *count)
{
    if (nb > 9) {
        recursive_loop(nb / 10, store_number, count);
        if (2147483647 == nb && store_number == -2147483648) {
            my_putchar_counter('8', count);
        } else {
            my_putchar_counter(48 + nb % 10, count);
        }
    } else {
        my_putchar_counter(48 + nb, count);
    }
}

int my_put_nbr(int nb)
{
    int store_number = 0;
    int count = 0;

    if (nb == -2147483648) {
        store_number = nb;
    }
    nb = neg_to_pos_nbr(nb, &count);
    recursive_loop(nb, store_number, &count);
    return count;
}
