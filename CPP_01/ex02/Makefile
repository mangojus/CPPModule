# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/03 16:37:12 by rshin             #+#    #+#              #
#    Updated: 2025/11/05 14:30:10 by rshin            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = brainfreeze

# CONFIG

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

# PATHING

SRC = main.cpp

OBJ = main.o

# TARGET RULES

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

$%.o: %.cpp Makefile
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
