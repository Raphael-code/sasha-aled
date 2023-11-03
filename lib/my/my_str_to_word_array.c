/*
** EPITECH PROJECT, 2023
** my_str_to_word_array.c
** File description:
** Title is perfect
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int my_wordlen(char const *str, int i)
{
    int counter = 0;

    while (my_char_isalpha(str[i]) == 1 || my_char_isnum(str[i]) == 1) {
        counter++;
        i++;
    }
    return counter;
}

int skip_non_alphanum(char const *str, int k)
{
    while (my_char_isalpha(str[k]) == 0 && my_char_isnum(str[k]) == 0 &&
        str[k] != '\0') {
        k++;
    }
    return k;
}

int words_counter(char const *str)
{
    int length = my_strlen(str);
    int words_count = 0;

    for (int i = 0; i < length; i++) {
        if ((my_char_isalpha(str[i]) == 0 && my_char_isnum(str[i]) == 0) &&
            (my_char_isalpha(str[i - 1]) == 1 ||
            my_char_isnum(str[i - 1]) == 1)) {
            words_count += 1;
        }
    }
    return words_count;
}

int words_characters_counter(char const *str, char **array)
{
    int counter = 0;
    int word_length = 0;
    int k = 0;

    while (str[k] != '\0') {
        if (my_char_isalpha(str[k]) == 1 || my_char_isnum(str[k]) == 1) {
            word_length = my_wordlen(str, k);
            array[counter] = malloc(sizeof(char) * (word_length + 1));
            my_strncpy(array[counter], &(str[k]), word_length);
            array[counter][word_length] = '\0';
            k = k + word_length;
            counter++;
        } else {
            k = skip_non_alphanum(str, k);
        }
    }
    array[counter] = NULL;
    return 0;
}

char **my_str_to_word_array(char const *str)
{
    int words_count;
    char **array = NULL;

    if (str == NULL) {
        return NULL;
    }
    words_count = words_counter(str);
    array = malloc(sizeof(char *) * (words_count + 1));
    words_characters_counter(str, array);
    return array;
}
