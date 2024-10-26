NAME = libft.a
SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -I.
RM = rm -f
BONUS_FLAG = .bonus_done

all: $(NAME)

$(NAME):$(OBJS)
		ar rcs $(NAME) $(OBJS)

bonus:	$(NAME) $(BONUS_OBJS)

$(BONUS_FLAG):	$(BONUS_OBJS)
				ar rcs $(NAME) $(BONUS_OBJS)
				touch $(BONUS_FLAG)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS) $(BONUS_FLAG)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus