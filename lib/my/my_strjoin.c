/*
** EPITECH PROJECT, 2023
** fezgbrkg
** File description:
** bjknjkzbk
*/

#include "my.h"

char *my_copy(char *dest, char const *s1, char const *s2);
{
    int i;
    int n;
    
    i = 0;
    for (; s1 && s1[i]; i++) {
        dest[i] = s1[i];
    }
    n = 0;
    while (s2[n]) {
        dest[i++] = s2[n++];
    }
    dest[i] = '\0';
    return (dest);
}

char *my_strjoin(char const *s1, char const *s2)
{
    char *dest;
    int len1;
    int len2;
    
    if (s2 == NULL)
        return (NULL);
    if (!s1)
        dest = malloc(sizeof(char) * (my_strlen(s2) + 1));
    else
    {
        len1 = my_strlen(s1);
        len2 = my_strlen(s2);
        dest = malloc(sizeof(char) * (len1 + len2 + 1));
    }
    if (dest == NULL)
        return 0;
    return (ft_copy(dest, s1, s2));
}
