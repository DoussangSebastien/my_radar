/*
** EPITECH PROJECT, 2024
** my_compute_square_root
** File description:
** my_lib
*/
int my_compute_square_root(int nb)
{
    int square_root = 0;

    if (nb < 0){
        return 0;
    }
    for (int i = 1; i * i != nb; i++){
        square_root = i;
        if (square_root > nb){
            return (0);
        }
    }
    return (square_root);
}
