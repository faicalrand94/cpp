NAME = zombie

FLAGS = -Wall -Wextra -Werror

CP = clang++ -std=c++98

SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "no *.o"

fclean: clean
	rm -rf $(NAME)

re: fclean all