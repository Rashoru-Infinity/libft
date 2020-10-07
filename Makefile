CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
AR	= ar
AFLAGS	= cr
RM	= rm -f
SRCS	= main.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c
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

ret	:	tclean test

.PHONY	: clean fclean all re
