NAME = megaphone

CPPFILES = megaphone.cpp 

CPPOBJ = $(CPPFILES:%.cpp=%.o)

CC = clang++

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra

$(NAME):$(CPPOBJ)
	$(CC) $(CPPFLAGS) $(CPPOBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(CPPOBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)