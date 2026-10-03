/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabukhai <mabukhai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 16:33:04 by mabukhai          #+#    #+#             */
/*   Updated: 2026/10/03 17:48:51 by mabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	char	c;
	int		len;

	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		len++;
	}
	if (n >= 10)
	{
		ft_putunsigned(n / 10);
		n = n % 10;
		len++;
	}
	c = n + '0';
	write(1, &c, 1);
	return (len);
}
