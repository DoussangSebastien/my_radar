##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## compile libmy
##

SRC     =        my_putchar.c \
                 my_isneg.c \
                 my_put_nbr.c \
                 my_swap.c \
                 my_putstr.c \
                 my_strlen.c \
                 my_getnbr.c \
                 my_sort_int_array.c \
                 my_compute_power_rec.c \
                 my_compute_square_root.c \
                 my_is_prime.c \
                 my_find_prime_sup.c \
                 my_strcpy.c \
                 my_strncpy.c \
                 my_strstr.c \
                 my_strcmp.c \
                 my_strncmp.c \
                 my_strupcase.c \
                 my_strlowcase.c \
                 my_strcapitalize.c \
                 my_str_isalpha.c \
                 my_str_isnum.c \
                 my_str_islower.c \
                 my_str_isupper.c \
                 my_str_isprintable.c \
                 my_showstr.c  \
                 my_showmem.c \
                 my_strcat.c \
                 my_strncat.c \
                 my_swapstr.c \
				 my_isalpha.c \
                 my_printf.c \
                 my_put_float.c \
                 my_put_nbr_hex.c \
                 my_put_nbr_oct.c \
				 my_arrlen.c \
				 my_str_to_word_array.c \
                 ./printf_flags/check_flag.c \
                 ./printf_flags/check_error.c \
                 ./printf_flags/precision.c \
                 ./printf_flags/flag_c.c \
                 ./printf_flags/flag_s.c \
                 ./printf_flags/flag_di.c \
                 ./printf_flags/flag_o.c \
                 ./printf_flags/flag_u.c \
                 ./printf_flags/flag_x.c \
                 ./printf_flags/flag_x_up.c \
                 ./printf_flags/flag_f.c \
                 ./printf_flags/flag_e.c \
                 ./printf_flags/flag_e_up.c \
                 ./printf_flags/flag_n.c \
                 ./printf_flags/flag_p.c \
                 ./printf_flags/flag_per.c

OBJ     =       $(SRC:.c=.o)

NAME    =       libmy

all:    $(NAME) clean

$(NAME):  $(OBJ)
	ar rc $(NAME).a $(OBJ)
	cp my.h ../../include
	cp ./printf_flags/struct.h ../../include/printf_flags

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean
