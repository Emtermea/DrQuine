NAME_1 = Colleen
NAME_2 = Grace
NAME_3 = Sully

FLAGS = -Wall -Wextra -Werror

SRC_1 = Colleen.c
SRC_2 = Grace.c
SRC_3 = Sully.c

OBJ_1 = $(SRC_1:.c=.o)
OBJ_2 = $(SRC_2:.c=.o)
OBJ_3 = $(SRC_3:.c=.o)

.PHONY: all clean fclean re

all: $(NAME_1) $(NAME_2) $(NAME_3)

$(NAME_1): $(OBJ_1)
	gcc $(FLAGS) -o $(NAME_1) $^
%.o: %.c
	gcc $(FLAGS) -o $@ -c $<

$(NAME_2): $(OBJ_2)
	gcc $(FLAGS) -o $(NAME_2) $^
%.o: %.c
	gcc $(FLAGS) -o $@ -c $<

$(NAME_3): $(OBJ_3)
	gcc $(FLAGS) -o $(NAME_3) $^
%.o: %.c
	gcc $(FLAGS) -o $@ -c $<


clean:
	rm -f $(OBJ_1) $(OBJ_2) $(OBJ_3)

fclean: clean
	rm -f $(NAME_1) $(NAME_2) $(NAME_3)

re: fclean all
