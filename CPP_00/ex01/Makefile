# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/03 16:37:12 by rshin             #+#    #+#              #
#    Updated: 2025/11/04 18:07:57 by rshin            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

# CONFIG

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

IFLAGS = -I $(INC) -MMD -MP 

# PATHING

SRC_DIR = src

BLD_DIR = .build

INC = include

SRC = $(SRC_DIR)/main.cpp \
	  $(SRC_DIR)/PhoneBook.cpp \
	  $(SRC_DIR)/Contact.cpp

OBJ = $(patsubst $(SRC_DIR)/%.cpp, $(BLD_DIR)/%.o, $(SRC))

DEP = $(patsubst $(SRC_DIR)/%.cpp, $(BLD_DIR)/%.d, $(SRC))

# TARGET RULES

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(IFLAGS) $(OBJ) -o $(NAME)

$(BLD_DIR)/%.o: $(SRC_DIR)/%.cpp Makefile
	mkdir -p $(dir $@)
	$(CC) $(CPPFLAGS) $(IFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

-include $(DEP)

.PHONY: all clean fclean re
