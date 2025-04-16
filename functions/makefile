NAME = lib
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
SRC = main.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c 
OBJ = $(SRC: .c=.o)
RM = rm -f

all: $(NAME)
%.o: %.c
	$(CC) = $(CFLAGS) -c $< -o $@
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all 