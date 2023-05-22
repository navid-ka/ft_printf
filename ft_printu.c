/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:48:21 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/22 23:19:08 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static int	ft_icount(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static char	*ft_uitoa(unsigned int n)
{
	char				*arr;
	int					count;
	unsigned int		d;
	long int			nb;

	nb = n;
	count = ft_icount(nb);
	arr = (char *)ft_calloc(count + 1, sizeof(char));
	if (!arr)
		return (NULL);
	while (count--)
	{
		d = nb / 10;
		arr[count] = 48 + nb % 10;
		nb = d;
	}
	return (arr);
}


int	ft_printu(unsigned int nb)
{
	char	*str;
	int		len;

	str = ft_uitoa(nb);
	len = ft_prints(str);
	free(str);
	return (len);
}
