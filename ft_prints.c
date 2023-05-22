/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:50:11 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/22 13:07:52 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_prints(char *s)
{
	unsigned int	i;

	i = 0;
	ft_putstr_fd(s, 1);
	while (*s++)
		i++;
	return (i);
}