NAME		= Zombie
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
OBJDIR		= .objFiles
FILES		= main Zombie
SRC			= $(FILES:=.cpp)
OBJS		= $(FILES:=.o)
$(NAME) : $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
all: $(NAME)
clean: 
	$(RM) *.o
fclean: clean 
	$(RM) $(NAME)
re : fclean all
.PHONY: all clean fclean re test