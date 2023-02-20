##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC =	main.c				\
		pushswap.c			\
		utils.c				\
		lib.c

NAME =	push_swap

all:	$(NAME)

$(NAME):
		@gcc -o $(NAME) $(SRC)
		@rm -f $(OBJ)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re:		fclean all
