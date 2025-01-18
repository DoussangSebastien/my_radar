/*
** EPITECH PROJECT, 2024
** my_swap
** File description:
** my_lib
*/
void my_swap(int *a, int *b)
{
    int value;

    if (!a || !b)
        return;
    value = *a;
    *a = *b;
    *b = value;
}
