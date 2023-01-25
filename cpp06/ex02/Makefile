SRCS	= main.cpp Base.cpp A.cpp B.cpp C.cpp

OBJS	= ${SRCS:.cpp=.o}

NAME	= ex02

RM		= rm -f

CC		= g++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
			${RM} a.out

re :		fclean all

.PHONY:		all clean fclean re
