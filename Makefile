NAME = libft.a #output static library name

CC = cc #C compiler

CFLAGS = -Wall -Wextra -Werror #mandatory compilation flags

SRC = ft_strlen.c #source files

OBJ = $(SRC:.c=.o) #object files derived from sources

all: $(NAME) #default target

#build static library from object files
$(NAME): $(OBJ) 
	ar rcs $(NAME) $(OBJ)

#compile .c to .o
#rebuild if header changes
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

#remove object files
clean:
	rm -f $(OBJ)

#remove objects and library
fclean: clean
	rm -f $(NAME)

re: fclean all #full rebuild
