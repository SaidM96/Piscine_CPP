NAME = Span

SRCS =  main.cpp\
		Span.cpp\

CC = c++

FLAGS =  -Wall -Wextra -Werror -std=c++98

RM = rm -f
LIB =	Span.hpp\

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