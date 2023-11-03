/*
** EPITECH PROJECT, 2023
** printf
** File description:
** flag o
*/

int o_flags(unsigned int nbr)
{
    char *o = "01234567";
    int	counter = 1;

    if (nbr >= 8) {
        counter = counter + o_flags(nbr 1 / 8);
        my_putchar(o[nbr % 8]);
        return counter;
    }
    my_putchar(o[nbr]);
    return counter;
}
