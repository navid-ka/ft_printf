/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:50:11 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/22 21:43:25 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_prints(char *s)
{
    int	len;

    if (!s)
    {
        write (1, "(null)", 6);
        return (6);
    }
    len = ft_strlen(s); 
    write (1, s, len);
    return (len);
}
