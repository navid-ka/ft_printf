/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:12:49 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/22 18:32:28 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_rev(char *arr, int size)
{
	size--;
	while (size >= 0)
	{
		write(1, &arr[size], 1);
		size--;	
	}
}

int lenght_hexa(unsigned long int ptr)
{
	int lenght;
	
	lenght = 0;
	if (ptr == 0)
		return 1;
	while(ptr)
	{
		ptr = ptr / 16;
		lenght++;
	}
	return lenght;
}

int	ft_print_pointer_hexa(unsigned long int ptr)
{
	unsigned long int	i;
	int  				hexa_lenght;
	char				*out;


	i = 0;
	hexa_lenght = lenght_hexa(ptr);
	out = malloc(sizeof(char) * (hexa_lenght + 1));
	if(out == NULL)
		return -1;
	while (ptr)
	{
		out[i++] = "0123456789abcdef"[ptr % 16];
		ptr /= 16;
	}
	out[hexa_lenght] = '\0';
	ft_rev(out, hexa_lenght);
	free(out);
	return (hexa_lenght);
}

int	ft_printp(unsigned long int ptr)
{
	int i;
	i = 2;
	if(write(1, "0x", 2) == -1)
		return -1;
	i += ft_print_pointer_hexa(ptr);
	return (i);
}