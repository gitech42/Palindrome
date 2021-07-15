##
## EPITECH PROJECT, 2021
## make
## File description:
## file
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	palindrome

all:
	gcc -c $(SRC)
	gcc -o palindrome *.c -lm -g

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f *~

re:	fclean all
