/*
** EPITECH PROJECT, 2024
** my_str_isnum
** File description:
** my_lib
*/
int my_str_isnum(char const *str)
{
    int nb = 0;

    if (!str)
        return 84;
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] < 48 || str[i] > 57){
            return 0;
        }
    }
    return 1;
}
