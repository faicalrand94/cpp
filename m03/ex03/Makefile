NAME = DiamondTrap

FLAGS = -Wall -Wextra -Werror

CP = clang++ -std=c++98

SRC = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "no *.o"

fclean: clean
	rm -rf $(NAME)

re: fclean all