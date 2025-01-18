/*
** EPITECH PROJECT, 2024
** my_strcmp
** File description:
** my_lib
*/
int my_strcmp(char const *s1, char const *s2)
{
    if (!s1 || !s2)
        return 84;
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++){
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
    }
    return 0;
}
