NAME	= phonebook
CC		= c++
CFLAGS	= -Wall -Werror -Wextra --std=c++98
RM		= rm -rf
SRC		= Contact.cpp PhoneBook.cpp main.cpp
OBJ		= $(SRC:.cpp=.o)



all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
