# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: labenall <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/03 20:12:30 by labenall          #+#    #+#              #
#    Updated: 2021/12/14 01:48:26 by labenall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRC = ft_printf.c ft_printhexa.c ft_printchar.c ft_printdecimal.c ft_printstr.c \
	  ft_printhexalow.c ft_printhexaupp.c  ft_printpercent.c \
	  ft_printundec.c

OBJ = $(SRC:.c=.o)

RM = rm -f

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all = $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	cc $(FLAGS) -c $<

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

