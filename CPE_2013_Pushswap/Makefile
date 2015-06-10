##
## Makefile for push_swap in /home/lancel_e/rendu/CPE_2013_Pushswap
## 
## Made by lancel_e
## Login   <lancel_e@epitech.net>
## 
## Started on  Sun Jan  5 21:07:20 2014 lancel_e
## Last update Mon Jan  6 22:33:36 2014 lancel_e
##

CC =    gcc

SRC   = main.c \
	basic.c \
	evolve.c \
	my_getnbr.c \
	my_putchar.c \
	my_putstr.c \
	my_power_rec.c

NAME	= push_swap

OBJ	= $(SRC:.c=.o)

RM	= rm -f

all: $(NAME)

$(NAME): $(OBJ)
	cc $(OBJ) -o $(NAME)
clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
