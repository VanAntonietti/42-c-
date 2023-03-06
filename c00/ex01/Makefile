NAME = myawesomephonebook

SRC = main.cpp \
		Contact.cpp \
		PhoneBook.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	g++ -I . -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re

