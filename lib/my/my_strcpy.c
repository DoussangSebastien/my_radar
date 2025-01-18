/*
** EPITECH PROJECT, 2024
** my_strcpy
** File description:
** my_lib
*/
#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i_last = 0;

    if (!dest || !src)
        return NULL;
    for (int i = 0; src[i] != '\0'; i++){
        dest[i] = src[i];
        i_last++;
    }
    dest[i_last] = '\0';
    return dest;
}
