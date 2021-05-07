# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/02 17:14:37 by ehafidi           #+#    #+#              #
#    Updated: 2021/05/03 12:25:41 by ehafidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \

CC = clang++
CCFLAGS = -g  -Wall -Wextra -Werror -std=c++98

NAME = Iter
RM = rm -rf

all	: $(NAME) 

$(NAME) :
	$(CC) $(CCFLAGS) $(SRC) -o $(NAME) 

fclean: clean
	$(RM) *.dSYM

clean:
	$(RM) $(NAME)

re: fclean all