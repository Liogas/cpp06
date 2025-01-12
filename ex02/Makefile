CC 		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g
NAME	= ex01

SRCS		= main.cpp Serializer.cpp
OBJS		= $(SRCS:.cpp=.o)

%.o: %.cpp
	@$(CC) $(CFLAGS) -o $@ -c $^

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

run: $(NAME)
	@./$(NAME)

run_v: $(NAME)
	@valgrind --leak-check=full ./$(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)
	@rm *_shrubbery

re : fclean $(NAME)

.PHONY: clean fclean re