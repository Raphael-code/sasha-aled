/*
** EPITECH PROJECT, 2023
** my_getnbr.c
** File description:
** Returns a number from  string
*/

int is_max_int(long nb, int operator)
{
    nb = nb * operator;
    if (nb > 2147483647 || nb < -2147483648) {
        return 0;
    }
    return 666;
}

int my_getnbr(char const *str)
{
    int count = 0;
    long result = 0;
    int operator = 1;
    int is_max_int_return;

    for (count = 0; str[count] == '-' || str[count] == '+'; count++) {
        if (str[count] == '-') {
            operator = operator * -1;
        }
    }
    for (count = count; str[count] >= '0' && str[count] <= '9'; count++) {
        result = result * 10 + (str[count] - '0');
        is_max_int_return = is_max_int(result, operator);
        if (is_max_int_return == 0) {
            return 0;
        }
    }
    return result * operator;
}
