# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/14 11:29:04 by gcoqueir          #+#    #+#              #
#    Updated: 2024/02/14 11:29:05 by gcoqueir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all: $(NAME)

NAME: $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "\033[0;32mSUCCESS!\033[0m"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

run: all
	./$(NAME)

val: all
	@valgrind --quiet --leak-check=full --show-leak-kinds=all ./$(NAME)

clean:
	@$(RM) $(OBJS)
	@echo "\033[0;36mOBJECTS DESTROYED!\033[0m"

fclean:	clean
	@$(RM) $(NAME)
	@echo "\033[0;31mBINARY DESTROYED!\033[0m"

re:	fclean all

.PHONY: all clean fclean re run val