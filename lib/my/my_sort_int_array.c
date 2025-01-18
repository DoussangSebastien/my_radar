/*
** EPITECH PROJECT, 2024
** my_sort_int_array
** File description:
** 10
*/
#include "my.h"

static void condition(int *array, int i, int j)
{
    if (array[j] > array[i]){
        my_swap(&array[j], &array[i]);
    }
}

void my_sort_int_array(int *array, int size)
{
    if (!array)
        return;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            condition(array, i, j);
        }
    }
}
