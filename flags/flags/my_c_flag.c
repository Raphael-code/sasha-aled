/*
** EPITECH PROJECT, 2023
** B-CPE-101-PAR-1-1-myprintf-maxence.bunel
** File description:
** my_c_flag
*/

int my_flag_c(va_list ap, int *char_count)
{
    char res = va_arg(ap, int);

    (*char_count)++;
    return res;
}
