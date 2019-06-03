# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 08:28:51 by xrhoda            #+#    #+#              #
#    Updated: 2019/06/03 12:25:59 by xrhoda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
CFLAGS  = -Wall -Werror -Wextra

SRC = main.cpp
OBJ_DIR = obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

NAME = phonebook

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(OBJ): $(SRC)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $(SRC) -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm $(NAME)

all: fclean $(NAME)
	