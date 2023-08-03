NAME = bureaucrat

SRC = 	main.cpp \
		Bureaucrat.cpp \
		AForm.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp

CXX = c++

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -Wall -Wextra -Werror -std=c++98 -o $(NAME) $(OBJ)

$(OBJ): %.o: %.cpp
	$(CXX) -I . -Wall -Wextra -Werror -g -std=c++98 -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -rf *_shrubbery
	
re: fclean all

v: all
	valgrind --leak-check=full ./$(NAME)

.PHONY: all clean fclean re
