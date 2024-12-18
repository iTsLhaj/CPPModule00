NAME	=	Bankster
CC		=	c++
CFLAGS	=	-Wall -Werror -Wextra  --std=c++98
RM		=	rm -rf
INCLUDE	=	-I include/
SOURCES	=	src/Account.cpp src/tests.cpp
OBJECTS	=	$(SOURCES:.cpp=.o)



all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(INCLUDE) $(CFLAGS) $^ -o $@

%.o: %.cpp
	@$(CC) $(INCLUDE) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJECTS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
