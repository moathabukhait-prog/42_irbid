/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabukhai <mabukhai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 15:32:50 by mabukhai          #+#    #+#             */
/*   Updated: 2026/09/26 11:26:16 by mabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*ptr;
	size_t			total;
	size_t			i;

	if (n <= 0 || size <= 0)
		return (malloc(0));
	else if (((size_t)-1 / size) < n)
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
