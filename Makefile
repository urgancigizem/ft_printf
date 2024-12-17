Name= libftprintf.a

SRCS =ft_printf.c ft_funcs.c

OBJS= $(SRCS:.c=.o)

RM= rm -rf
CC = cc
AR = ar rc
CFLAGS= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	    $(AR) $(NAME) $(OBJS)


clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean

