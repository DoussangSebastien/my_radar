/*
** EPITECH PROJECT, 2024
** my_getnbr
** File description:
** my_lib
*/
#include "my.h"

int my_getnbr(char const *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    if (str == NULL || str[i] == '\0')
        return 0;
    while (str[i] == '-') {
        sign = -sign;
        i++;
    }
    for (; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return 0;
        }
        result = result * 10 + (str[i] - '0');
    }
    return result * sign;
}
