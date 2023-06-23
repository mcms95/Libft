NAME	=	libft.a

CC	=	cc
CFLAGS	=	-Werror	-Wall	-Wextra

SRC =	ft_atoi.c	ft_itoa.c	ft_putnbr_fd.c	ft_strlcpy.c	ft_strtrim.c	ft_strrchr.c\
			ft_bzero.c	ft_memchr.c	ft_putstr_fd.c	ft_strlen.c	ft_substr.c	ft_calloc.c\
			ft_memcmp.c	ft_strmapi.c	ft_tolower.c	ft_isalnum.c	ft_memcpy.c	ft_split.c\
			ft_strchr.c	ft_toupper.c	ft_isalpha.c	ft_memmove.c	ft_strdup.c\
			ft_strncmp.c	ft_isascii.c	ft_memset.c	ft_striteri.c	ft_isdigit.c\
			ft_putchar_fd.c	ft_strjoin.c	ft_strnstr.c	ft_isprint.c	ft_putendl_fd.c	ft_strlcat.c

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJ)
	@ar rcs $@ $^
	@echo "$(NAME) created successfully"

clean:	
	@rm	-f	$(OBJ)
	@echo "Object files removed"

fclean:	clean
	@rm	-f	$(NAME)
	@echo "$(NAME) removed"

re:	fclean	all

.PHONY:	all clean fclean re