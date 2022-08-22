NAME = Bureaucrat

SRCS =  main.cpp\
		Bureaucrat.cpp\
		Form.cpp\
		ShrubberyCreationForm.cpp\
		RobotomyRequestForm.cpp\
		PresidentialPardonForm.cpp\
		Intern.cpp\

CC = c++

FLAGS =  -Wall -Wextra -Werror -std=c++98

RM = rm -f
LIB =	Bureaucrat.hpp\
		Form.hpp\
		ShrubberyCreationForm.hpp\
		RobotomyRequestForm.hpp\
		PresidentialPardonForm.hpp\
		Intern.hpp\

OBJT = $(SRCS:.cpp=.o)

$(NAME): $(OBJT) $(LIB)
	$(CC) $(OBJT) $(FLAGS) -o $(NAME)

%.o : %.cpp $(LIB)
	$(CC) $(FLAGS) -o $@ -c $<

all : $(NAME)

clean:
	$(RM) $(OBJT)

fclean:
	$(RM) $(OBJT) $(NAME)

re:	fclean all

.PHONY: all fclean clean re
