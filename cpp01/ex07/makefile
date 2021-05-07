# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/02 17:14:37 by ehafidi           #+#    #+#              #
#    Updated: 2021/04/13 12:10:52 by ehafidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

CC = clang++
CCFLAGS = -g -Wall -Wextra -Werror -std=c++98

NAME = replace
RM = rm -rf

all	: $(NAME) 

$(NAME) :
	$(CC) $(CCFLAGS) $(SRC) -o $(NAME) 

fclean:
	$(RM) *.replace
	$(RM) *.dSYM
	$(RM) $(NAME)	

re: fclean all