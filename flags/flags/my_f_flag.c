/*
** EPITECH PROJECT, 2023
** printf
** File description:
** flag f
*/

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include "../../../../printf.h"
#include "../../../../my.h"
#include "../../../../my_struct.h"

char *base_flags(unsigned long long nbr, char *base, char *buffer)
{
    int len = my_strlen(base);
    int counter = 1;

    if (nbr >= len) {
        counter = counter + base_flags((nbr / len), base, buffer);
        my_strjoin(buffer, base[nbr % len]);
        return counter;
    }
    my_strjoin(buffer, base[nbr]);
    return buffer;
}

int my_len_nbr(double nb)
{
    int c = 1;
    int i = 0;

    while (nb > c) {
        c = c * 10;
        i = i + 1;
    }
}

int my_round_float(double dec, char id)
{
    int ent = 0;

    while (dec > 1) {
        dec = dec - 1;
        ent++;
    }
    if (id == 'r')
        return ent;
    return dec;
}

int my_f_flag(va_list ap)
{
    double nbr = va_arg(ap, double);
    long ent;
    int nb0 = 0;
    char *buffer;

    ent = nbr;
    nbr = nbr - ent;
    for (int iter = 0; iter < 20; iter++) {
        nbr = nbr * 10;
        if (nbr < 1)
            nb0 = nb0 + 1;
    }
    buffer = base_flags(ent, "0123456789", buffer);
    my_strjoin(buffer, ".");
    for (; nb0 > 0; nb0--) {
        my_strjoin(buffer, "0");
    }
    buffer = base_flags((long long)nbr, "0123456789", buffer);
    return buffer;
}
