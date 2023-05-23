/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 23:36:52 by bifrost           #+#    #+#             */
/*   Updated: 2023/05/23 13:43:37 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void	ft_rev(char *arr, int size)
{
	size--;
	while (size >= 0)
	{
		write(1, &arr[size], 1);
		size--;
	}
}

static int	ft_lenght_hexa(unsigned int n)
{
	unsigned int	lenght;

	lenght = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 16;
		lenght++;
	}
	return (lenght);
}

static int	ft_hex(unsigned int n, char *base)
{
	unsigned int		i;
	unsigned int		hexa_lenght;
	char				*out;

	i = 0;
	hexa_lenght = ft_lenght_hexa(n);
	out = malloc(sizeof(char) * (hexa_lenght + 1));
	if (out == NULL)
		return (-1);
	while (n)
	{
		out[i++] = base[n % 16];
		n /= 16;
	}
	out[hexa_lenght] = '\0';
	ft_rev(out, hexa_lenght);
	free(out);
	return (hexa_lenght);
}

int	ft_printhex(unsigned int n, char *base)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	i += ft_hex(n, base);
	return (i);
}
