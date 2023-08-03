NAME = bureaucrat

SRC = 	main.cpp \
		Bureaucrat.cpp \
		AForm.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \
		Intern.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	clanc++ -I . -Wall -Wextra -Werror -g -std=c++98 $(OBJ) -o $(NAME)

$(OBJ): %.o: %.cpp
	clanc++ -I . -Wall -Wextra -Werror -g -std=c++98 -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -rf *_shrubbery
	
re: fclean all

v: all
	valgrind --leak-check=full ./$(NAME)

.PHONY: all clean fclean re
