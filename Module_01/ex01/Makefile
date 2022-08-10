# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smia <smia@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/03 00:30:32 by smia              #+#    #+#              #
#    Updated: 2022/08/03 01:31:16 by smia             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Moar_brainz

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
SRCS =  main.cpp\
		zombieHorde.cpp\
		Zombie.cpp\

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