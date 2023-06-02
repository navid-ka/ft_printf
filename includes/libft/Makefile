NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
LIBF = ar rc
OBJECTS = ft_strlen.o ft_strncmp.o ft_isalpha.o \
	ft_isdigit.o ft_isalnum.o ft_isascii.o \
	ft_isprint.o ft_toupper.o ft_tolower.o \
	ft_strchr.o ft_strrchr.o ft_atoi.o \
	ft_strdup.o ft_memset.o ft_bzero.o \
	ft_memchr.o ft_memcpy.o ft_memcmp.o \
	ft_memmove.o ft_strlcpy.o ft_strlcat.o \
	ft_strnstr.o ft_calloc.o ft_substr.o \
	ft_strjoin.o ft_strtrim.o ft_split.o \
	ft_itoa.o ft_strmapi.o ft_striteri.o \
	ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o \
	ft_putnbr_fd.o

OBJECTS_BONUS = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o \
	ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o \
	ft_lstclear.o ft_lstiter.o ft_lstmap.o

COLOR_RESET = \033[0m
COLOR = \033[32m

KAOMOJI_COMPILE = (╮°-°)╮┳━┳
KAOMOJI_SUCCESS = (ノಠ益ಠ)ノ彡┻━┻

%.o : %.c libft.h
	@printf "\r$(COLOR)Compiling Libft: $(KAOMOJI_COMPILE)$(COLOR_RESET) $< "
	@cc -c ${CFLAGS} $< -o $@

${NAME}: ${OBJECTS} 
	@${LIBF} ${NAME} ${OBJECTS}
	@printf "$(COLOR)Libft library compiled successfully! $(COLOR_RESET)\n"

all: ${NAME}

fclean: clean
	@rm -f ${NAME}


clean:
	@rm -f ${OBJECTS} ${OBJECTS_BONUS}


re: fclean all

bonus:  ${OBJECTS_BONUS} 
	@${LIBF} ${NAME} ${OBJECTS_BONUS}
	@printf "$(COLOR)Bonus objects added to Libft library! $(KAOMOJI_SUCCESS)$(COLOR_RESET)\n"

.PHONY: clean all fclean re bonus
