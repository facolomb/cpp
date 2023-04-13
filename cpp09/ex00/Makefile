SRCS	= main.cpp BitcoinExchange.cpp

OBJS	= ${SRCS:.cpp=.o}

NAME	= btc

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

re :		fclean all

.PHONY:		all clean fclean re
