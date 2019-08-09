RM	= rm -f

SRC	= main.cpp \
	  Cards.cpp \
	  Player.cpp \
	  Deck.cpp

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
