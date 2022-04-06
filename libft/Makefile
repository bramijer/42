#NAME = libft.a
#OBJS = ${SRCS:.c=.o}
#OBJSB = ${BONUS:.c=.o}
#CC = gcc
#RM = rm -f
#CFLAGS = -Wall -Wextra -Werror

#SRCS =  ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putend_fd.c \
		ft_putnbr_fd.c \
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
		ft_toupper.c 

#BONUS = ft_lstadd_back_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstmap_bonuis.c \
		ft_lstsize_bonus.c \
		ft_lstnew_bonus.c 

#.c.o: 
#	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

#${NAME}: ${OBJS}
#	ar rc ${NAME} ${OBJS}

#all: ${NAME}

#bonus: ${NAME} ${OBJSB}
#	ar rc ${NAME} ${BONUS_OBJS}
#	touch bonus

#clean: 
#	${RM} ${OBJS} ${OBJSB} bonus

#fclean: clean
#	${RM} ${NAME}

#re: fclean all

#.PHONY: all clean fclean re

NAME 		=	libft.a

SRCS 		= 	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c \
				ft_isprint.c	ft_strlen.c		ft_memset.c		ft_bzero.c \
				ft_memcpy.c		ft_memmove.c	ft_strlcpy.c	ft_strlcat.c \
				ft_toupper.c	ft_tolower.c	ft_strchr.c		ft_strrchr.c \
				ft_strncmp.c	ft_memchr.c		ft_memcmp.c		ft_strnstr.c \
				ft_atoi.c		ft_calloc.c		ft_strdup.c		ft_substr.c \
				ft_strjoin.c	ft_strtrim.c	ft_split.c		ft_itoa.c \
				ft_strmapi.c	ft_striteri.c	ft_putchar_fd.c	ft_putstr_fd.c \
				ft_putendl_fd.c	ft_putnbr_fd.c

OBJS 		=	$(addprefix bin/, ${SRCS:.c=.o})

BONUS		=	ft_lstnew_bonus.c		ft_lstsize_bonus.c	ft_lstlast_bonus.c	ft_lstadd_front_bonus.c \
				ft_lstdelone_bonus.c	ft_lstclear_bonus.c	ft_lstiter_bonus.c	ft_lstadd_back_bonus.c \
				ft_lstmap_bonus.c

BONUS_OBJS	=	$(addprefix bin/, ${BONUS:.c=.o})

CC 			= 	gcc
CFLAGS 		= 	-Wall -Wextra -Werror

AR 			= 	ar rc
RM 			= 	rm -f

GREEN		:=	"\033[0;32m"
CYAN		:=	"\033[0;36m"
RESET		:=	"\033[0m"

bin/%.o: 		%.c
				@mkdir -p ${dir $@}
				@${CC} ${CFLAGS} -o $@ -c $<

${NAME}: 		${OBJS}
				@${AR} ${NAME} ${OBJS}
				@echo ${GREEN}"Compiled '${NAME}' with success" ${RESET}

all: 			${NAME}

bonus:			${NAME} ${BONUS_OBJS}
				@${AR} ${NAME} ${BONUS_OBJS}
				@touch bonus
				@echo ${GREEN}"Compiled 'bonus' with success" ${RESET}


clean:
				@${RM} -rf bin/ ${BONUS_OBJS} bonus
				@echo ${CYAN}"Cleaned objects with success"${RESET}


fclean: 		clean
				@${RM} ${NAME}
				@echo ${CYAN}"Removed '${NAME}' with success"${RESET}


re: 			fclean all

.PHONY: 		all clean fclean re 