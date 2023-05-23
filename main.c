#include <stdio.h>
#include "includes/ft_printf.h"

int	main(void)
{
	char a;
	char s[] = "Hola mundo";
	int x;

	x = 243242312;
	a = 'a';
	ft_printf("%c Hola \n", a);
	ft_printf("flag sc %s %c \n", s, a);
	printf("flag PUUU %p \n", &x);
	ft_printf("flag PUUU %d \n", -10);
	printf("flag PUUU %d \n", -10);


/*printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% 
%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 
,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);*/
	
	return (0);
}