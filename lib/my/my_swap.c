/*
** EPITECH PROJECT, 2023
** my_swap.c
** File description:
** Swaps values of parameters with the pointers
*/

void my_swap(int *a, int *b)
{
    int storage = *a;

    *a = *b;
    *b = storage;
}
