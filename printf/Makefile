NAME 		=	libftprintf.a

SRCS 		= 	ft_printf.c		ft_funcprintf.c		ft_funcprintfbis.c \

OBJS 		=	$(addprefix bin/, ${SRCS:.c=.o})

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

clean:
				@${RM} -rf bin/ ${BONUS_OBJS} bonus
				@echo ${CYAN}"Cleaned objects with success"${RESET}


fclean: 		clean
				@${RM} ${NAME}
				@echo ${CYAN}"Removed '${NAME}' with success"${RESET}


re: 			fclean all

.PHONY: 		all clean fclean re 