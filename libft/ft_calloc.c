/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabukhai <mabukhai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 15:32:50 by mabukhai          #+#    #+#             */
/*   Updated: 2026/09/21 16:14:27 by mabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>

void	*calloc(size_t n, size_t size)
{
	unsigned char	*ptr;
	size_t			total;
	size_t			i;

	if (n <= 0 || size <= 0)
		return (malloc(0));
	else if ((SIZE_MAX / size) < n)
		return (NULL);
	total = n * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	i = 0;
	while (total--)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
