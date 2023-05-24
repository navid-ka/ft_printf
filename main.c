#include <stdio.h>
#include "includes/ft_printf.h"

int	main(void)
{
	char a;
	char s[] = "Hola mundo";
	int x;
	unsigned long h;

	x = 243242312;
	a = 'a';
	ft_printf("%c Hola \n", a);
	ft_printf("flag ftsc %s %c \n", s, a);
	printf("flag pP %p \n", &x);
	ft_printf("flag ftD %d \n", -10);
	printf("flag Df %d \n", -10);
	ft_printf("flag ftx %x \n", &h);
	printf("flag px %x \n", &h);
	ft_printf("flag ftX %X \n", &h);
	printf("flag ftX %X \n", &h);


/*printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% 
%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 
,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);*/
	
	return (0);
}