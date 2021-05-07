# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/02 17:14:37 by ehafidi           #+#    #+#              #
#    Updated: 2021/04/29 17:26:54 by ehafidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Intern.cpp Bureaucrat.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Form.cpp  main.cpp \

CC = clang++
CCFLAGS = -g  -Wall -Wextra -Werror -std=c++98

NAME = Intern
RM = rm -rf

all	: $(NAME) 

$(NAME) :
	$(CC) $(CCFLAGS) $(SRC) -o $(NAME) 

fclean:
	$(RM) *_shrubbery
	$(RM) *.dSYM
	$(RM) $(NAME)

re: fclean all