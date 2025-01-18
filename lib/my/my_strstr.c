/*
** EPITECH PROJECT, 2024
** my_strstr
** File description:
** my_lib
*/
#include <stddef.h>
#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int compt = 0;
    int len = my_strlen(to_find);

    if (!str || !to_find)
        return "wrong input";
    while (str[i] != '\0'){
        if (str[i + compt] != to_find[compt]){
            compt = 0;
            i++;
        }
        if (str[i + compt] == to_find[compt]){
            compt++;
        }
        if (compt == len) {
            return &str[i];
        }
    }
    return NULL;
}
