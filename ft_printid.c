/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:48:21 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/23 16:42:53 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_printid(int nb)
{
	char	*str;
	int		len;

	str = ft_itoa(nb);
	len = ft_prints(str);
	free(str);
	if (len == -1)
		return (-1);
	return (len);
}
