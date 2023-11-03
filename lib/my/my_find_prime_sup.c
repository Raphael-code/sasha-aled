/*
** EPITECH PROJECT, 2023
** my_find_prime_sup.c
** File description:
** Finds the next prime number : What should I do when nb is neg ?
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    int is_prime = 0;
    int counter = nb - 1;

    while (is_prime == 0) {
        counter++;
        is_prime = my_is_prime(counter);
    }
    return counter;
}
