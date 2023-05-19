NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
LIB = -L./libft -lft
LIBF = ar rc
OBJECTS = ft_printf.o

# ANSI escape codes for colors
COLOR_RESET = \033[0m
COLOR_CYAN = \033[32m

# Kaomojis
KAOMOJI_SUCCESS = (づ ᴗ _ᴗ)づ♡
KAOMOJI_REMOVE = (ノಠ益ಠ)ノ彡┻━┻

${NAME}: ${OBJECTS}
	@make -C ./libft --no-print-directory
	@${LIBF} ${NAME} ${OBJECTS}
	@printf "$(COLOR_CYAN)ft_printf library compiled successfully! $(KAOMOJI_SUCCESS)$(COLOR_RESET)\n"

all: ${NAME}

%.o : %.c
	@printf "\r$(COLOR_CYAN)Compiling ft_printf: $(COLOR_RESET)$< \n"
	@cc -c ${CFLAGS} $< -o $@

fclean: clean
	@rm -f ${NAME}
	@rm -f libft/libft.a
	@printf "$(COLOR_CYAN)Cleaned ft_printf and libft directories! $(KAOMOJI_REMOVE)$(COLOR_RESET)\n"

clean:
	@rm -f ${OBJECTS}
	@rm -f libft/*.o
	@printf "$(COLOR_CYAN)Cleaned object files! $(KAOMOJI_REMOVE)$(COLOR_RESET)\n"

re: fclean all

.PHONY: clean all fclean re