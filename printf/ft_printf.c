/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabukhai <mabukhai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 18:22:47 by mabukhai          #+#    #+#             */
/*   Updated: 2026/10/04 16:19:00 by mabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_format(char c, va_list *ap)
{
	if (c == 'c')
		return (ft_putchar(va_arg(*ap, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*ap, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnpr(va_arg(*ap, int)));
	else if (c == 'u')
		return (ft_putunsigned(va_arg(*ap, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(va_arg(*ap, unsigned int), c));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'p')
		return (ft_putptr(va_arg(*ap, void *)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start (ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_format(format[i], &ap);
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end (ap);
	return (len);
}
