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

val: all
	@valgrind --quiet --leak-check=full --show-leak-kinds=all ./$(NAME)

clean:
	@$(RM) $(OBJS)
	@echo "\033[0;36mOBJECTS DESTROYED!\033[0m"

fclean:	clean
	@$(RM) $(NAME)
	@echo "\033[0;31mBINARY DESTROYED!\033[0m"

re:	fclean all

.PHONY: all clean fclean re val