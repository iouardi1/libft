NAME=            libft.a
TEST_FILE=        Test.c
FLAGS=            -Wall -Werror -Wextra
CC=                cc
SRC_FILES = ft_isalnum.c \
			ft_isdigit.c \
			ft_memmove.c \
			ft_strlen.c \
			ft_atoi.c \
			ft_isalpha.c \
			ft_isprint.c \
			ft_memset.c \
			ft_strncmp.c \
			ft_bzero.c \
			ft_isascii.c \
			ft_memcpy.c \
			ft_strlcpy.c \
			ft_strnstr.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strlcat.c \
			ft_memcmp.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_memchr.c \
			ft_strtrim.c \
			ft_itoa.c
OBJ_FILES=        $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES) 

%.o: %.c
	$(CC) $(FLAGS) -c $<

test: all
	${CC} ${TEST_FILE} ${NAME}
	clear & ./a.out
	
norminette:
	echo \\n\\n\\n\\n\\n & norminette

clean:
	find . -name "*.o" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re test