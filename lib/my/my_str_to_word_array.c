/*
** EPITECH PROJECT, 2024
** seb
** File description:
** my_str_to_word_array.c
*/
#include "my.h"

static int check_sep_begin(char const *str, int i, char sep)
{
    while (str[i] == sep){
        i++;
    }
    return i;
}

static int check_sep(char const *str, int i, char sep)
{
    while (str[i] != '\0' && str[i] != sep) {
        i++;
    }
    return i;
}

static char **create_tab(char const *str, char sep)
{
    int nb_mot = 0;
    char **tab;
    int i = 0;

    if (str == NULL)
        return NULL;
    while (str[i] != '\0') {
        i = check_sep_begin(str, i, sep);
        if (str[i] != '\0') {
            nb_mot++;
            i = check_sep(str, i, sep);
        }
    }
    tab = malloc(sizeof(char *) * (nb_mot + 1));
    if (tab == NULL)
        return NULL;
    tab[nb_mot] = NULL;
    return tab;
}

char **my_str_to_word_array(char const *str, char sep)
{
    char **tab = create_tab(str, sep);
    int start = 0;
    int length = 0;
    int index = 0;

    if (tab == NULL)
        return NULL;
    for (int i = 0; str[i] != '\0';) {
        i = check_sep_begin(str, i, sep);
        if (str[i] != '\0') {
            start = i;
            i = check_sep(str, i, sep);
            length = i - start;
            tab[index] = malloc(sizeof(char) * (length + 1));
            my_strncpy(tab[index], &str[start], length);
            tab[index][length] = '\0';
            index++;
        }
    }
    return tab;
}
