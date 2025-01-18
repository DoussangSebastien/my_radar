/*
** EPITECH PROJECT, 2024
** seb
** File description:
** main.c
*/
#include "include/my.h"
#include "include/radar.h"
#include "include/struct.h"

int main(int ac, char const *av[])
{
    object_t *values;
    int len;

    if (ac != 2){
        write(2, "incorrect number of arguments\n", 30);
        return 84;
    }
    if (!my_strcmp(av[1], "-h")){
        help();
        return 0;
    }
    values = parse(av);
    if (!values){
        write(2, "invalid file / failed to open\n", 30);
        return 84;
    }
    len = get_len(av);
    radar(values, len);
    return 0;
}
