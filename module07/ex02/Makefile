# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 15:15:18 by gcoqueir          #+#    #+#              #
#    Updated: 2024/04/11 15:15:19 by gcoqueir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

vpath %.cpp sources

NAME = array

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(LIBS) -O3 -g3

LIBS = ./includes
OBJ_DIR = objects/

RM = rm -f
FILES = main.cpp Array.cpp

OBJS = $(FILES:.cpp=.o)

all: mkdir_obj $(NAME)

$(OBJ_DIR)%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

mkdir_obj:
	@mkdir -p $(OBJ_DIR)

$(NAME): $(addprefix $(OBJ_DIR), $(OBJS))
	@$(CC) $(addprefix $(OBJ_DIR), $(OBJS)) -o $(NAME)
	@echo "\033[0;32mSUCCESS!\033[0m"

val: all
	@valgrind --quiet --leak-check=full --show-leak-kinds=all ./$(NAME)

clean:
	@$(RM) $(addprefix $(OBJ_DIR), $(OBJS))
	@echo "\033[0;36mBUILD DIRECTORY CLEAN!\033[0m"

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[0;31mBINARY DESTROYED!\033[0m"

re: fclean all

.PHONY: all clean fclean re