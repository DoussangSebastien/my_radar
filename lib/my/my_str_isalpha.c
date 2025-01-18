/*
** EPITECH PROJECT, 2024
** my_str_isalpha
** File description:
** my_lib
*/
int my_str_isalpha(char const *str)
{
    if (!str)
        return 84;
    for (int i = 0; str[i] != '\0'; i++){
        if ((str[i] < 65 || str[i] > 122) || (str[i] < 97 && str[i] > 90)){
            return 0;
        }
    }
    return 1;
}
