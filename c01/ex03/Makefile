NAME = violence

SRC = 	main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ -I . -Wall -Wextra -Werror -g -std=c++98 $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
