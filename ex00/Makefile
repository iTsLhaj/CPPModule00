NAME	= megaphone
CC		= c++
CFLAGS	= -Wall -Werror -Wextra --std=c++98
RM		= rm -rf
SRC		= src/megaphone.cpp
OBJ		= $(SRC:.cpp=.o)



all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJECTS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
