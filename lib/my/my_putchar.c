/*
** EPITECH PROJECT, 2024
** my_putchar
** File description:
** my_lib
*/
#include <unistd.h>

void my_putchar(char c)
{
    if (write(1, &c, 1) == -1)
        return;
}
