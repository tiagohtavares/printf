LIBFT = ./libft/libft.a

NAME = libftprintf.a

SRCS =  ft_printf.c main.c

CC	= cc
RM	= rm -f
CFLAGS	= -Wall -Wextra -Werror -I.

OBJS = $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)
	$(CC) $(CFLAGS) -o test.o main.c $(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)

bonus:	$(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:	all clean fclean re bonus
