/*
** EPITECH PROJECT, 2023
** my_strncmp.c
** File description:
** Compare strings
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (n == 0) {
        return 0;
    }
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i != n) {
        i++;
    }
    if (s1[i] > s2[i]) {
        return 1;
    } else if (s1[i] < s2[i]) {
        return -1;
    } else {
        return 0;
    }
}
