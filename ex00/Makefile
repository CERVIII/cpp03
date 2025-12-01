# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/01 21:25:38 by pcervill          #+#    #+#              #
#    Updated: 2025/12/01 22:46:53 by pcervill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Clap

SRC		= main.cpp ClapTrap.cpp

OBJ		= $(SRC:.cpp=.o)

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address -g3

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)
	@echo " \033[32m[ OK ] | $(NAME) ready! ✅\033[0m"

$(NAME): $(OBJ)
	@echo " \033[33m[ .. ] | Compiling $(NAME)... \033[0m"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@echo " \033[35m[ OK ] | $(NAME) fclean ready! 🧹\033[0m"

re: fclean all

.PHONY: all clean fclean re

.SILENT: $(OBJ)