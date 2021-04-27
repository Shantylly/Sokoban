	##
## EPITECH PROJECT, 2020
## makefile
## File description:
## compile libmy
##

CC	= gcc

SRC	=	./src/main.c \
		./src/error.c \
		./src/direction.c \
		./src/player.c \
		./src/check.c

OBJ	= $(SRC:.c=.o)

NAME	= my_sokoban

CFLAGS	= -I./lib/my -L./lib/ -lmy

LDFLAGS = -lncurses

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME) $(LDFLAGS)

clean:
	rm -f $(OBJ)
	make clean -C ./lib/my

fclean: clean
	rm -f $(NAME)
	rm *~ -f $(NAME)
	rm *# -f $(NAME)
	make fclean -C ./lib/my

re: fclean all

.PHONY: all clean fclean re
