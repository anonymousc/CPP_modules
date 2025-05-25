NAME = phonebook

CXX = c++

CXXFLAGS = -std=c++98 -Wextra -Wall -Werror #-fsanitize=address -g3

SRC = Contact.cpp PhoneBook.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME) 

clean : 
	rm -rf $(OBJ)

fclean : clean 
	rm -rf $(NAME)

re : fclean all

.SECONDARY : $(OBJ)