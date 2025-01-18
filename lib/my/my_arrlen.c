/*
** EPITECH PROJECT, 2024
** my
** File description:
** my_arrlen.c
*/
#include "my.h"

int my_arrlen(char **args)
{
    int nb = 0;

    while (args[nb]){
        nb++;
    }
    return nb;
}
