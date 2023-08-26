NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_printf \
		ft_putchar \
		ft_puthex \
		ft_putnbr \
		ft_putnbr_u \
		ft_putpointer \
		ft_putstr \


SRCS_DIR = ./
SRCS = $(addprefix $(SRC_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(SRC_DIR), $(addsuffix .o, $(FILES)))

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

clean:
	$(RM) $(OBJS) 
fclean: clean
	$(RM) $(NAME)
re: clean all

.PHONY: all clean fclean re