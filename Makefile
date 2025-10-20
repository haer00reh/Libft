NAME = libft.a
AR = ar rcs
CC = cc
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -Iincludes

FILES = srcs/ft_calloc.c \
		srcs/ft_isascii.c \
		srcs/ft_itoa.c \
		srcs/ft_memcpy.c \
		srcs/ft_putchar_fd.c \
		srcs/ft_putstr_fd.c \
		srcs/ft_striteri.c \
		srcs/ft_strlcpy.c \
		srcs/ft_strncmp.c \
		srcs/ft_strsplit.c \
		srcs/ft_tolower.c \
		srcs/ft_atoi.c \
		srcs/ft_isalnum.c \
		srcs/ft_isdigit.c \
		srcs/ft_memchr.c \
		srcs/ft_memmove.c \
		srcs/ft_putendl_fd.c \
		srcs/ft_strchr.c \
		srcs/ft_strjoin.c \
		srcs/ft_strlen.c \
		srcs/ft_strnstr.c \
		srcs/ft_strtrim.c \
		srcs/ft_toupper.c \
		srcs/ft_bzero.c \
		srcs/ft_isalpha.c \
		srcs/ft_isprint.c \
		srcs/ft_memcmp.c \
		srcs/ft_memset.c \
		srcs/ft_putnbr_fd.c \
		srcs/ft_strdup.c \
		srcs/ft_strlcat.c \
		srcs/ft_strmapi.c \
		srcs/ft_strrchr.c \
		srcs/ft_substr.c \
		srcs/ft_memalloc.c \
		srcs/ft_memccpy.c \
		srcs/ft_memdel.c \
		srcs/ft_strcat.c \
		srcs/ft_strclr.c \
		srcs/ft_strcmp.c \
		srcs/ft_strcpy.c \
		srcs/ft_strdel.c \
		srcs/ft_strequ.c \
		srcs/ft_striter.c \
		srcs/ft_strmap.c \
		srcs/ft_strncat.c \
		srcs/ft_strncpy.c \
		srcs/ft_strnequ.c \
		srcs/ft_strnew.c \
		srcs/ft_strstr.c \
		srcs/ft_strsub.c 

BONUS_FILES = srcs/ft_lstadd_front_bonus.c \
				srcs/ft_lstnew_bonus.c	\
				srcs/ft_lstlast_bonus.c \
				srcs/ft_lstsize_bonus.c \
				srcs/ft_lstadd_back_bonus.c \
				srcs/ft_lstclear_bonus.c \
				srcs/ft_lstdelone_bonus.c

OBJ = $(FILES:.c=.o)
OBJ_BONUS = $(BONUS_FILES:.c=.o)
#rules
all: $(NAME)
$(NAME): $(OBJ)
		$(AR) $(NAME) $(OBJ)

bonus: $(OBJ_BONUS)
		$(AR) $(NAME) $(OBJ_BONUS)
#args
clean:
		rm -f $(OBJ) $(OBJ_BONUS)
fclean: clean
		rm -f $(NAME)
re: fclean all
