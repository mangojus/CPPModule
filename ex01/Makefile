# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/03 16:37:12 by rshin             #+#    #+#              #
#    Updated: 2025/11/03 16:55:33 by rshin            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

# CONFIG

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

IFLAGS = -I -MMD -MP 

# PATHING

SRC = PhoneBook.cpp

BLD_DIR = .build

OBJ = $(patsubst %.cpp, $(BLD_DIR)/%.o, $(SRC)))

DEP = $(patsubst %.cpp, $(BLD_DIR)/%.d, $(SRC))

# TARGET RULES

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(BLD_DIR)%.o: %.cpp Makefile
	mkdir -p $(dir $@)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(BLD_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

-include $(DEP)

.PHONY: all clean fclean re
