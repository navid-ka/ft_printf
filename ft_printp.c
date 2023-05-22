/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:12:49 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/22 15:03:18 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static void	ft_rev(char *arr, int size)
{
	int	start;
	int	end;
	int middleman;

	start = 0;
	end = size - 1;
    while (start < end) 
	{
        middleman = arr[start];
        arr[start] = arr[end];
        arr[end] = middleman;
        start++;
        end--;
	}
}

int	ft_printp(unsigned long int ptr)
{
	unsigned long int	i;
	char				*out;

	i = 2;
	out = ft_strjoin("0", "x");
	while (ptr)
	{
		out[i++] = "0123456789abcdef"[ptr % 16];
		ptr /= 16;
	}


	out[i] = '\0';
	ft_rev(&out[2], i);
	ft_putstr_fd(out, 1);
	return (i);
}