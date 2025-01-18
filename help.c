/*
** EPITECH PROJECT, 2024
** my_radar
** File description:
** help.c
*/
#include "./include/my.h"

void help(void)
{
    write(1, "Air traffic simulation panel\n", 29);
    write(1, "USAGE\n", 6);
    write(1, "\t./my_radar [OPTION] path_to_script\n", 36);
    write(1, "\tpath_to_script\tThe path to the scritp\n", 39);
    write(1, "OPTIONS\n", 8);
    write(1, "\t-h\tprint the usage and quit\n", 29);
    write(1, "USER INTERACTIONS\n", 18);
    write(1, "\t'L' key\tenable/disable hitboxes and areas\n", 43);
    write(1, "\t'S' key\tenable/disable sprites\n", 32);
}
