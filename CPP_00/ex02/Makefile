# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/04 17:14:22 by rshin             #+#    #+#              #
#    Updated: 2025/11/04 17:32:57 by rshin            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

# CONFIG

NAME = prog

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

IFLAGS = -MMD -MP

# PATHING

SRC_DIR = src

BLD_DIR = .build

SRC = foo.cpp
		#Account.cpp \
	  #tests.cpp

OBJ = $(patsubst $(SRC_DIR)/%.cpp, $(BLD_DIR)/%.o, $(SRC))

DEP = $(patsubst $(SRC_DIR)/%.cpp, $(BLD_DIR)/%.d, $(SRC))

# TARGET RULES

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(IFLAGS) $(OBJ) -o $(NAME)

$(BLD_DIR)/%.o: $(SRC_DIR)/%.cpp Makefile
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(OBJ) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(BLD_DIR)
	rm -rf $(NAME)

re: fclean all

-include $(DEP)

.PHONY: all clean fclean re
