NAME = libftprintf.a

SRCS = ft_printf.c ft_print_int.c ft_print_char.c ft_print_str.c\
ft_print_hexa.c ft_print_void_hexa.c ft_print_uint.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = cc

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re