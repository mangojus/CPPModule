# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/03 14:50:48 by rshin             #+#    #+#              #
#    Updated: 2025/11/03 16:01:04 by rshin            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

# CONFIG

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

# PATHING

SRC = megaphone.cpp

BLD_DIR = .build

OBJ = $(patsubst %.cpp, $(BLD_DIR)%.o, $(SRC))

# TARGET RULES

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(BLD_DIR)%.o: %.cpp Makefile
	mkdir -p $(dir $@)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(BLD_DIR)

fclean: #clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
