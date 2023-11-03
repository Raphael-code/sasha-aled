/*
** EPITECH PROJECT, 2023
** printf
** File description:
** flag a
*/

#include "my.h"

int base_flags_hexa(unsigned int nbr, char *base)
{
    int len = my_strlen(base);
    int counter = 1;

    if (nbr >= len) {
        counter = counter + base_flags_hexa((nbr / len), base);
        my_putchar(base[nbr % len]);
        return counter;
    }
    my_putchar(base[nbr]);
    return counter;
}

int my_f_hexa_flag(double nbr)
{
    long dec;
    long ent;
    double dec2;
    int i = 0;

    ent = nbr;
    dec = nbr * (float)1000000;
    dec = dec - (ent * 1000000);
    dec2 = (double)dec;
    i = i + base_flags_hexa(ent, "0123456789abcde");
    i ++;
    my_putchar('.');
    i = i + base_flags_hexa((long)dec2, "0123456789abcde");
    return i;
}

int my_a_flag(double nb)
{
    int n = 0;

    my_put_str("0x");
    if (nb > 0) {
        while (nb > 15) {
            nb = nb / 16;
            n = n + 1;
            printf("plus\n");
        }
        my_f_hexa_flag(nb);
        my_putstr("p+");
        my_put_nbr(n);
    }
    if (nb < 0) {
        while (nb < 1) {
            nb = nb / 16;
            n = n - 1;
            printf("moins\n");
        }
        my_f_hexa_flag(nb);
        my_putstr("p-");
        my_put_nbr(n);
    }
}

int main()
{
    printf("%a\n", 105.12);
    my_a_flag(105.12);
    printf("\n");
}
