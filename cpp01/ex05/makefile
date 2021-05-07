# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/02 17:14:37 by ehafidi           #+#    #+#              #
#    Updated: 2021/04/13 11:06:38 by ehafidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Human.cpp Brain.cpp main.cpp

CC = clang++
CCFLAGS = -g -Wall -Wextra -Werror -std=c++98

NAME = brain
RM = rm -rf

all	: $(NAME) 

$(NAME) :
	$(CC) $(CCFLAGS) $(SRC) -o $(NAME) 

fclean:
	$(RM) *.dSYM
	$(RM) $(NAME)

re: fclean all