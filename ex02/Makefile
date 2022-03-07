
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bleotard <bleotard@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/17 22:04:08 by bleotard          #+#    #+#              #
#    Updated: 2021/09/15 00:49:50 by bleotard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		a.out

CC 		=		c++
CFLAGS 	=		-Wall -Wextra -Werror -std=c++98

SRC		=		main.cpp \
				Fixed.cpp \
				FixedConstructors.cpp \
				FixedOperators.cpp

OBJ		=		$(SRC:.cpp=.o)

%.o:			%.cpp
				$(CC) $(CFLAGS) -I. -c $< -o $@

$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 

all:			$(NAME)

clean:
				rm $(OBJ)

fclean:			clean
				rm $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
