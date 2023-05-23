/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:42:54 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/23 13:20:51 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_format(const char *format, va_list args)
{
	int	check;

	check = 0;
	if (*format == 'c')
		check += ft_printc((char)va_arg(args, int));
	else if (*format == 's')
		check += ft_prints(va_arg(args, char *));
	else if (*format == 'p')
		check += ft_printp(va_arg(args, unsigned long));
	else if (*format == 'd' || *format == 'i')
		check += ft_printid(va_arg(args, int));
	else if (*format == 'u')
		return (ft_printu(va_arg(args, unsigned int)));
	else if (*format == 'x' || *format == 'X')
	{
		if (*format == 'x')
			check += ft_printhex(va_arg(args, unsigned int), \
			"0123456789abcdef");
		if (*format == 'X')
			check += ft_printhex(va_arg(args, unsigned int), \
			"0123456789ABCDEF");
	}
	return (check);
}

int	ft_printf(const char *format, ...)
{
	va_list			args;
	unsigned int	i;

	i = 0;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (ft_strchr("cspdiuxX", *format))
				i += ft_check_format(format, args);
			else if (*format == '%')
				i += ft_printc('%');
		}
		else
			i += ft_printc(*format);
		format++;
	}
	va_end(args);
	return (i);
}
