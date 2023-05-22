/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:48:21 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/22 20:26:59 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_printid(int nb)
{
	int	i;

	i = 0;
	ft_putnbr_fd(nb, 1);
	if (nb == -2147483648)
		return (11);
	if (nb == 0)
		return (1);
	if (nb < 0)
		i++;
	if (nb >= 9)
	{
		nb /= 10;
		i++;
	}
	return (i);
}
