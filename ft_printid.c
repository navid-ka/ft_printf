/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:48:21 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/22 21:46:16 by bifrost          ###   ########.fr       */
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
    return (len);
}
