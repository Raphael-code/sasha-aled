/*
** EPITECH PROJECT, 2023
** printf
** File description:
** flag x
*/

int x_flags(unsigned int nbr)
{
    char *x = "0123456789abcdef";
    int counter = 1;

    if (nbr >= 16) {
        counter = counter + x_flags(nbr 1 / 16);
        my_putchar(x[nbr % 16]);
        return counter;
    }
    my_putchar(x[nbr]);
    return counter;
}
