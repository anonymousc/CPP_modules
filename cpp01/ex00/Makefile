NAME = Zombie

CXX = c++

CXXFLAGS = -Wextra -Wall -Werror -std=c++98

SRC = newZombie.cpp randomChump.cpp Zombie.cpp main.cpp

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