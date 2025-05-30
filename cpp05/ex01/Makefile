NAME = Form

CXX = c++

CXXFLAGS = -Wextra -Wall -Werror -std=c++98

SRC = $(wildcard *.cpp)

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
