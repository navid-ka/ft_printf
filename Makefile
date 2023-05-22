NAME = libftprintf.a
INC = includes/
LIB = $(INC)libft/
LIBA = $(LIB)libft.a
CFLAGS = -Wall -Wextra -Werror -I $(INC)
PRINTF = ft_printf.h
LIBF = ar rcs
OBJECTS = ft_printf.o ft_printc.o ft_prints.o \
	ft_printp.o

COLOR_RESET = \033[0m
COLOR = \033[32m
KAOMOJI_SUCCESS = (づ ᴗ _ᴗ)づ♡
KAOMOJI_REMOVE = (ノಠ益ಠ)ノ彡┻━┻

${NAME}: ${OBJECTS}
	make -C $(LIB) --no-print-directory
	cp includes/libft/libft.a $(NAME)
	${LIBF} ${NAME} ${OBJECTS}
	@printf "$(COLOR)ft_printf library compiled successfully! $(KAOMOJI_SUCCESS)$(COLOR_RESET)\n"

all: ${NAME}

%.o: %.c $(INC)%.h
	@printf "\r $(COLOR)Compiling ft_printf: $(COLOR_RESET) $< \n"
	cc -c ${CFLAGS} $< -o $@

fclean: clean
	make fclean -C $(LIB) --no-print-directory
	rm -rf ${NAME}
	@printf "$(COLOR)Cleaned ft_printf and libft directories! $(KAOMOJI_REMOVE)$(COLOR_RESET)\n"

clean:
	make fclean -C $(LIB) --no-print-directory
	rm -f ${OBJECTS}
	@printf "$(COLOR)Cleaned object files! $(KAOMOJI_REMOVE)$(COLOR_RESET)\n"

re: fclean all

main: ${NAME} main.c
	@cc main.c ${NAME} -I./libft -L./libft -lft -o printf
	@printf "$(COLOR)Main program compiled successfully!$(COLOR_RESET)\n"

.PHONY: clean all fclean re main
