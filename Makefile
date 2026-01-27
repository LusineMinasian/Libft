NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_strlen.c \
	ft_isalpha.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isprint.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
