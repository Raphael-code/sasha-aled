/*
** EPITECH PROJECT, 2023
** my_is_prime.c
** File description:
** Returns if a number is prime or not
*/

int my_is_prime(int nb)
{
    int result = 0;

    if (nb <= 1) {
        return 0;
    }
    for (int i = 2; i < nb; i++) {
        result = nb % i;
        if (result == 0) {
            return 0;
        }
    }
    return 1;
}
