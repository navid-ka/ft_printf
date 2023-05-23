/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:42:31 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/05/23 13:45:01 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

int	ft_printc(char c);
int	ft_prints(char *s);
int	ft_printp(unsigned long ptr);
int	ft_printid(int nb);
int	ft_printu(unsigned int nb);
int	ft_printhex(unsigned int n, char *base);
int	ft_printf(char const *s, ...);

#endif