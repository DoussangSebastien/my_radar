/*
** EPITECH PROJECT, 2024
** my_is_prime
** File description:
** my_lib
*/
int my_is_prime(int nb)
{
    for (int i = 2; i != nb; i++){
        if (nb % i == 0 && i != nb || nb < 0){
            return (0);
        }
    }
    return (1);
}
