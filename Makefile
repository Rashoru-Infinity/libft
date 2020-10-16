CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
AR	= ar
AFLAGS	= cr
RM	= rm -f
SRCS	= main.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
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
