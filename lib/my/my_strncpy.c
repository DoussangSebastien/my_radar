/*
** EPITECH PROJECT, 2024
** my_strncpy
** File description:
** my_lib
*/
#include "my.h"

char *my_strncpy(char *dest, const char *src, int n)
{
    if (!dest || !src)
        return NULL;
    for (int i = 0; i < n; i++) {
        dest[i] = (i < n && src[i] != '\0') ? src[i] : '\0';
    }
    return dest;
}
