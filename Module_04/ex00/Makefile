NAME = poly

SRCS =  main.cpp\
		Animal.cpp\
		Dog.cpp\
		Cat.cpp\
		WrongCat.cpp\
		WrongAnimal.cpp\

CC = c++

FLAGS =  -Wall -Wextra -Werror -std=c++98

RM = rm -f
LIB =	Animal.hpp\
		Dog.hpp\
		Cat.hpp\
		WrongCat.hpp\
		WrongAnimal.hpp\
		

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
