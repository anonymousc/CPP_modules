NAME = harl

CXX = c++

CXXFLAGS = -Wextra -Wall -Werror -std=c++98
SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) Makefile *.hpp
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME) 

clean : 
	rm -rf $(OBJ)

fclean : clean 
	rm -rf $(NAME)

re : fclean all

.SECONDARY : $(OBJ)