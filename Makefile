NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

SRCS =	ft_printchar.c ft_printf.c ft_printhexa.c ft_printnbr.c ft_printptr.c ft_printstr.c ft_printunsignednbr.c


OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
