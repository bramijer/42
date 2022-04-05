NAME = libft.a
OBJS = ${BONUS:.c=0}
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

SRCS =  ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isdigit.c \
		ft_islower.c \
		ft_isprint.c \
		ft_isupper.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putend_fd.c \
		ft_putnbr.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \

BONUS = ft_lstadd_back_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstlastbonus.c \
		ft_lstmap_bonuis.c \
		ft_lstsize_bonus.c \
		ft_lstnew_bonus.c \

all: ${NAME}
.c.o: ${CC} ${CFLAGS}-c$<-o ${<:.c=.o}
${NAME}: ${OBJS}arrc${NAME}${OBJS}
bonus: @makeSRCS="$(SRCS)$(BONUS)"
clean: ${RM}${OBJS}${OBJS_BONUS}
fclean:clean${RM}${NAME}
re:fclean all
.PHONY: all clean fclean re bonus