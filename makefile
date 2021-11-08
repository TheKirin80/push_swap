SRCS	= classement.c push.c rotate.c rrotate.c swap.c tool.c list.c list_bis.c error.c maint.c push_swap.c

SRCSBON	=

INC		= -I includes

OBJS	= ${SRCS:.c=.o}

OBJSBON	= ${SRCSBON:.c=.o}

NAME 	= push_swap

CC 		= gcc

RM 		= rm -f

CFLAGS	= -Wall -Wextra -Werror #-g3 -fsanitize=address

.c.o :
			${CC} ${CFLAGS} ${INC} -o $@ -c $<

${NAME}:	${OBJS} 
			${CC}  ${CFLAGS} ${OBJS} -o ${NAME}

bonus:		${OBJS} ${OBJSBON} 
			${CCLIB} ${OBJS} ${OBJSBON}

all:		${NAME}

clean:		
			${RM} ${OBJS} ${OBJSBON}

fclean:		clean
			${RM} ${NAME} 

re:			fclean all

.PHONY:		all clean fclean re bonus