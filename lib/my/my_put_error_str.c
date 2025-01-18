/*
** EPITECH PROJECT, 2024
** seb
** File description:
** my_put_error_str.c
*/
#include "include/my.h"

void my_put_error_str(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++){
        write(2, &str[i], 1);
    }
}
