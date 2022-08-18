NAME	= Zombies
CC		= c++
CFLAGS	= -std=c++98 -Wall -Wextra -Werror
RM		= rm -f

SRCS	= main.cpp\
			Zombie.cpp\
			zombieHorde.cpp\

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re