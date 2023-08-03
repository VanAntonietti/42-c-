NAME = convert

SRC = 	main.cpp \
		Data.cpp \
		Serializer.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ -I . -Wall -Wextra -Werror -g -std=c++98 $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

v: all
	valgrind --leak-check=full ./$(NAME)

.PHONY: all clean fclean re
