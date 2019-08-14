RM	= rm -f

SRC	= main.cpp \
	  ListCard.cpp \
	  Cards.cpp \
	  Player.cpp \
	  Field.cpp

OBJ	= $(SRC:.cpp=.o)

NAME	= out

CC	= g++

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
