# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/02 17:14:37 by ehafidi           #+#    #+#              #
#    Updated: 2021/05/05 17:10:53 by ehafidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = span.cpp main.cpp \

CC = clang++
CCFLAGS = -g -fsanitize=address -Wall -Wextra -Werror -std=c++98

NAME = Span
RM = rm -rf

all	: $(NAME) 

$(NAME) :
	$(CC) $(CCFLAGS) $(SRC) -o $(NAME) 

fclean: clean
	$(RM) *.dSYM

clean:
	$(RM) $(NAME)

re: fclean all