CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

SRCS	= ft_strchr.c ft_strrchr.c ft_strjoin.c ft_strlen.c ft_strtrim.c ft_substr.c
OBJS	= $(SRCS:.c=.o)
HEADERS	= libft.h

RM		= rm -f

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $@ $^

%.o: %.c %(HEADERS)
		$(CC) -c $(CFLAGS) -o $@ $<

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

test: all clean
		norminette ft_*.c *.h
		gcc -static test.c -L. -I. -lft -o a.out
		./a.out

.PHONY: all clean fclean re
