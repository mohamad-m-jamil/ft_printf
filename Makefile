CC = cc
AR = ar -rcs
NAME = libftprintf.a
SRCS = ft_printf_c.c ft_printf_s.c ft_printf.c ft_printf_d.c ft_printf_u.c ft_print_hexa.c ft_printf_p.c
FLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re