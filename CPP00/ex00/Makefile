NAME = megaphone
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp
OBJS = $(SRCS:%.cpp=%.o)

$(NAME) : $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) *.o
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re test
