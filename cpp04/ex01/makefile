# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/02 17:14:37 by ehafidi           #+#    #+#              #
#    Updated: 2021/04/27 19:41:12 by ehafidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = AWeapon.cpp Enemy.cpp Character.cpp PlasmaRifle.cpp PowerFist.cpp RadScorpion.cpp SuperMutant.cpp main.cpp\

CC = clang++
CCFLAGS = -g  -Wall -Wextra -Werror -std=c++98

NAME = Wasteland
RM = rm -rf

all	: $(NAME) 

$(NAME) :
	$(CC) $(CCFLAGS) $(SRC) -o $(NAME) 

fclean:
	$(RM) *.dSYM
	$(RM) $(NAME)

re: fclean all