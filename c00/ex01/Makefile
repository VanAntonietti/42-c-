NAME = myawesomephonebook

SRC = main.cpp \
		Contact.cpp \
		PhoneBook.cpp

CXX = c++

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -Wall -Wextra -Werror -std=c++98 -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

