/*
** EPITECH PROJECT, 2023
** printf
** File description:
** flag u
*/

int u_flags(unsigned int nbr)
{
    char *u = "0123456789";
    int counter = 1;

    if (nbr >= 10) {
        counter = counter + u_flags(nbr 1 / 10);
        my_putchar(u[nbr % 10]);
        return counter;
    }
    my_putchar(u[nbr]);
    return counter;
}
