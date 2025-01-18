/*
** EPITECH PROJECT, 2024
** my_strlowcase
** File description:
** my_lib
*/
char *my_strlowcase(char *str)
{
    if (!str)
        return "wrong input";
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] >= 65 && str[i] <= 90){
            str[i] += 32;
        }
    }
    return str;
}
