NAME = PhoneBook
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main PhoneBook
SRC = $(FILES:=.cpp)
OBJS = $(FILES:=.o)

$(NAME) : $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) *.o
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re test
