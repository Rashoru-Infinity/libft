CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
AR	= ar
AFLAGS	= cr
RM	= rm -f
SRCS	= main.c ft_memset.c
OBJS 	= ${SRCS:.c=.o}
TARGET	= libft.a
TEST	= main

all	:	${TARGET}

.c.o	:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${TARGET}	:	${OBJS}
		${AR} ${AFLAGS} ${TARGET} ${OBJS}

clean	:
	${RM} ${OBJS}

fclean	:	clean
	${RM} ${TARGET}

re	:	fclean all

test	:	${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${TEST}

tclean	:	fclean
	${RM} ${TEST}

.PHONY	: clean fclean all re
