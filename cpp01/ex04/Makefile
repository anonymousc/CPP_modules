NAME = Sed

CXX = c++

CXXFLAGS =  -std=c++98 -Wextra -Wall -Werror -g3

SRC = main.cpp

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