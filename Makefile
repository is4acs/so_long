RCS = so_long.c\


OBJS = ${SRCS:.c=.o}

NAME = so_long

CC = gcc 

RM = rm -f

CFLAGS = -Wall -Werror -Wextra -g

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${CC} $(OBJS) -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re