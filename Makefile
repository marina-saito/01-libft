CC		= clang
CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

SRCS	= ft_memset.c ft_bzero.c ft_memcpy.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strjoin.c ft_strtrim.c ft_substr.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJS	= $(SRCS:.c=.o)
HEADERS	= libft.h

RM		= rm -f

UNAME	= $(shell uname)

FUN		=

ifeq ($(UNAME), Darwin)
	LIBFLAGS = -L. -I. -lft
else
	LIBFLAGS = -L. -I. -lft -lbsd
endif

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

test: all
		norminette ft_*.c *.h
		$(CC) ../tests/01-libft/mss/test.c $(LIBFLAGS) -o a.out
		./a.out

warmachine:
		cd ../tests/01-libft/warmachine && bash grademe.sh $(FUN)

tripo:
		cd ../tests/01-libft/tripouille && $(MAKE) m

.PHONY: all clean fclean re
