NAME = phonebook
CC = c++
CFLAGS = -Wall -Werror -Wextra --std=c++98
RM = rm -rf
INC = -I include/
SRC = src/Contact.cpp src/PhoneBook.cpp src/main.cpp
OBJ = $(SRC:.cpp=.o)



all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(INC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	@$(CC) $(INC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
