.PHONY: all clean fclean re

SRCS_B = ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstnew.c \
	ft_lstsize.c \
	ft_lstmap.c\

OBJS_B = ${SRCS_B:.c=.o}
NAME = libft.a
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -c

all: ${NAME}

${NAME}: ${OBJS_B}
	ar rcs ${NAME} ${OBJS_B}

${OBJS_B}: ${SRCS_B}
	${CC} ${CFLAGS} ${SRCS_B}
	
clean: 
	${RM} ${OBJS_B}

fclean: clean
	${RM} ${NAME}

re: fclean all
