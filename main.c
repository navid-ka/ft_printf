#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char a;
	char s[] = "Hola mundo";

	a = 'a';
	ft_printf("%c Hola \n", a);
	ft_printf("flag sc %s %c \n", s, a);

	return (0);

}