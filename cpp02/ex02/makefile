# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/02 17:14:37 by ehafidi           #+#    #+#              #
#    Updated: 2021/04/15 11:53:03 by ehafidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Fixed.cpp main.cpp

CC = clang++
CCFLAGS = -g -Wall -Wextra -Werror

NAME = fixed
RM = rm -rf

all	: $(NAME) 

$(NAME) :
	$(CC) $(CCFLAGS) $(SRC) -o $(NAME) 

fclean:
	$(RM) *.dSYM
	$(RM) $(NAME)

re: fclean all