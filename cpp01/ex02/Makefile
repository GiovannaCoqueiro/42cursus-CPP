# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/14 16:14:24 by gcoqueir          #+#    #+#              #
#    Updated: 2024/02/14 16:17:32 by gcoqueir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all: $(NAME)

NAME: $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

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