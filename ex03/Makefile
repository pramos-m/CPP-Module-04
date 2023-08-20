# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 09:43:01 by pramos-m          #+#    #+#              #
#    Updated: 2023/08/20 09:44:20 by pramos-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed
SRC_DIR = src
INC_DIR = inc

SRC = $(SRC_DIR)/main.cpp $(SRC_DIR)/AMateria.cpp $(SRC_DIR)/AMateriaNode.cpp $(SRC_DIR)/Charachter.cpp $(SRC_DIR)/Cure.cpp $(SRC_DIR)/Floor.cpp $(SRC_DIR)/Ice.cpp $(SRC_DIR)/MateriaSource.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) -I$(INC_DIR) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re