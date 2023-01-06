NAME = libftprintf.a

SRCS =  ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_strchr.c ft_strlen.c \
		ft_itoa.c ft_itoa_unsigned.c ft_putnbr_unsigned.c ft_puthex_lower.c ft_puthex_upper.c \
		ft_putptr.c

CC	= cc
RM	= rm -f
CFLAGS	= -Wall -Wextra -Werror -I.

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re
