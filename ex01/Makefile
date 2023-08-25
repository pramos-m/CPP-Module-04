# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 09:42:24 by pramos-m          #+#    #+#              #
#    Updated: 2023/08/20 09:42:29 by pramos-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fire
SRC_DIR = src
INC_DIR = inc

SRC = $(SRC_DIR)/main.cpp $(SRC_DIR)/Animal.cpp $(SRC_DIR)/Cat.cpp $(SRC_DIR)/Dog.cpp $(SRC_DIR)/WrongAnimal.cpp $(SRC_DIR)/WrongCat.cpp
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