/*
** EPITECH PROJECT, 2023
** printf
** File description:
** p flag
*/

#include <unistd.h>

int my_hexa_len(unitptr_t hexa)
{
    int len = 0;

    for (; hexa != 0; len ++) {
        hexa = hexa / 16;
    }
    return len
}

void my_put_hexa(unitptr_t num)
{
    if (num >= 16) {
        my_put_hexa(num / 16);
        my_put_hexa(num % 16);
    } else {
        if (num <= 9)
            my_putchar(num + 48);
        else
            my_putchar(num - 10 + 'a');
    }
}

int my_p_flag(unsigned long hexa)
{
    int printlen = 0;

    printlen = printlen + write(1, "0x", 2);
    if (hexa == 0) {
        printlen = printlen + write(1, "0", 1);
    } else {
        my_put_hexa(hexa);
        printlen = my_hexa_len(hexa);
    }
    return printlen;
}
