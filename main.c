#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char a;
	char s[] = "Hola mundo";
	long int x;

	x = 243242312;
	a = 'a';
	ft_printf("%c Hola \n", a);
	ft_printf("flag sc %s %c \n", s, a);
	ft_printf("flag PUUU %p \n", &x);
	printf("flag PUUU %p \n", &x);
	return (0);
}