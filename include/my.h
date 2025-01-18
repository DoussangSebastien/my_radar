/*
** EPITECH PROJECT, 2024
** my
** File description:
** task02
*/

#ifndef MY_H
    #include "./printf_flags/struct.h"
    #include <time.h>
    #include <dirent.h>
    #include <grp.h>
    #include <pwd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <dirent.h>
    #include <stddef.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdarg.h>
    #include <asm-generic/errno.h>
    #include <dirent.h>
    #include <strings.h>
    #include <sys/stat.h>
    #include <errno.h>
    #include <asm-generic/errno-base.h>
    #include <grp.h>
    #include <pwd.h>
    #include <stdint.h>
    #include <unistd.h>
    #include <wctype.h>
    #define MY_H

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_is_prime(int nb);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
void my_sort_int_array(int *array, int size);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *scr, int index);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *scr, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
char my_isneg(int n);
void my_swapstr(char *a, char *b);
int my_isalpha(char str);
int my_printf(const char *form, ...);
int my_put_nbr_hex(unsigned int nb, char case_type);
int my_put_nbr_oct(unsigned int nb);
int my_put_float(double nb, int precision);
int my_getnbr(char const *str);
void my_put_error_str(char const *str);
void flag_l(struct dirent *element, DIR *directory);
char *my_strdup(char *src);
char **my_str_to_word_array(char const *str, char sep);
int my_arrlen(char **args);

#endif /*MY_H*/
