/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabukhai <mabukhai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 14:30:46 by mabukhai          #+#    #+#             */
/*   Updated: 2026/09/23 08:47:24 by mabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*des;
	const unsigned char	*sou;
	size_t				i;

	des = (unsigned char *)dest;
	sou = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		des[i] = sou[i];
		i++;
	}
	return (dest);
}
