RM	= rm -f

SRC	= main.cpp

OBJ	= $(SRC:.cpp=.o)

NAME	= out

CC	= g++

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(OBJ)

re: fclean all
