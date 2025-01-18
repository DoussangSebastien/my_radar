/*
** EPITECH PROJECT, 2024
** my_isalpha
** File description:
** is_alpha?
*/
int my_isalpha(char str)
{
    if ((str < 65 || str > 122) || (str < 97 && str > 90)){
        return 0;
    }
    return 1;
}
