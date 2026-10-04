/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabukhai <mabukhai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 13:10:57 by mabukhai          #+#    #+#             */
/*   Updated: 2026/10/04 16:21:48 by mabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putptr_number( unsigned long n)
{
	char	*hex;
	int		count;

	hex = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_putptr_number(n / 16);
	count += ft_putchar(hex[n % 16]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	unsigned long	n;
	int				count;

	if (!ptr)
		return (ft_putstr("(null)"));
	n = (unsigned long)ptr;
	count = ft_putstr("0x");
	count += ft_putptr_number(n);
	return (count);
}
