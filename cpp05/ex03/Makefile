NAME	= Bureaucrat
	
CC		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -MMD -MP
RM		= rm -rf
FILES	= main Intern Bureaucrat AForm PresidentialPardonForm RobotomyRequestForm ShrubberyCreationForm
OBJS	= $(FILES:=.o)
DEPS	= $(FILES:=.d)
.PHONY: all clean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS) $(DEPS) Home_shrubbery

fclean: clean
	$(RM) $(NAME) 

re: fclean all

-include $(DEPS)