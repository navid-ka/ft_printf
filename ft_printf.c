/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:42:54 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/21 21:02:42 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//cspdiuxX
int ft_conversion(char *s, va_list args)
{
	int	check;

	check = 0;
	while (*s++)
	{
		if (s == "%c")
			check = ft_putchar_fd(va_arg(args, int), 1);
		else if (s == "%s")
			check = ft_putstr_fd(va_arg(args, int), 1);
	
	}
	return (check);
}

int	ft_printf(char const *s, ...)
{
	va_list	args;
	int		print;

	va_start(args, s);
	print = ft_conversion(s, args);
	va_end(args);
	return (print);
}

#include <stdio.h>
int	main(void)
{
	char a;

	a = 'a';

	ft_printf("%c", a);

	return (0);

}