NAME = Brain

FLAGS = -Wall -Wextra -Werror

CP = clang++ -std=c++98

SRC = Animal.cpp Brain.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp  WrongCat.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "no *.o"

fclean: clean
	rm -rf $(NAME)

re: fclean all