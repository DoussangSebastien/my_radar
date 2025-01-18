##
## EPITECH PROJECT, 2024
## seb
## File description:
## Makefile
##

NAME	=		my_radar

SRC		=		my_radar.c \
				parse.c \
				create.c \
				display.c \
				background.c \
				free_all.c \
				help.c \
				plane_mvt.c \
				time.c \
				colision.c \
				main.c

OBJ		=		$(SRC:.c=.o)

CSFML	=		-lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

.PHONY:	all clean fclean re

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my
	gcc $(OBJ) -o $(NAME) -Wall -Wextra -I ./include -L lib/my -lmy -L. -lm $(CSFML)

valgrind:	$(OBJ)
	make -C ./lib/my
	gcc -g3 $(OBJ) -o $(NAME) -I ./include -L lib/my -lmy -L. -lm $(CSFML)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f "vgcore.*"
	rm -f $(NAME)

re: fclean all
