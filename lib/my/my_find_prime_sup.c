/*
** EPITECH PROJECT, 2024
** my_find_prime_sup
** File description:
** my_lib
*/
static int prime(int nb)
{
    for (int i = 2; i != nb; i++){
        if (nb % i == 0 && i != nb){
            return (0);
        }
    }
    return (1);
}

int my_find_prime_sup(int nb)
{
    int j = nb;

    while (!prime(j)){
        if (j < 0){
            j++;
        } else {
            return (0);
        }
    }
    return (j);
}
