NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
LIB = -L./libft -lft
LIBF = ar rc
OBJECTS = ft_printf.o

${NAME}: ${OBJECTS}
	make -C ./libft
	${LIBF} ${NAME} ${OBJECTS} 

all: ${NAME}

%.o : %.c
	gcc -c ${CFLAGS} $< -o $@ 

fclean: clean
	rm -f ${NAME}
	rm -f ./libft/libft.a

clean:
	rm -f *.o
	rm -f ./libft/*.o


re: fclean all

.PHONY: clean all fclean re