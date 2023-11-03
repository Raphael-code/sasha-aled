/*
** EPITECH PROJECT, 2023
** printf
** File description:
** flag X
*/

int my_maj_x_flag(unsigned int nbr)
{
    char *X = "0123456789ABCDEF";
    int	counter = 1;

    if (nbr >= 16) {
        counter = counter + X_flags(nbr 1 / 16);
        my_putchar(X[nbr % 16]);
        return counter;
    }
    my_putchar(X[nbr]);
    return counter;
}
