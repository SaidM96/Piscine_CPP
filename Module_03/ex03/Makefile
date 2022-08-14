NAME = FragTrap
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
SRCS =  main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp\
		DiamondTrap.cpp\

OBJT = $(SRCS:.cpp=.o)


$(NAME): $(OBJT)
	$(CC) $(OBJT) $(FLAGS) -o $(NAME)

$(OBJT): $(SRCS)
	$(CC) $(FLAGS) -c  $(SRCS)

all : $(NAME)
clean:
	$(RM) $(OBJT)
fclean:
	$(RM) $(OBJT) $(NAME)

re:	clean all

.PHONY: all fclean clean re