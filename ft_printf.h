#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

int	ft_printc(char c);
int	ft_prints(char *s);
int	ft_printp(void *ptr);
int	ft_printf(char const *s, ...);

#endif