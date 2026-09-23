/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabukhai <mabukhai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:41:21 by mabukhai          #+#    #+#             */
/*   Updated: 2026/09/23 09:20:29 by mabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	j;

	len_dst = 0;
	len_src = 0;
	while (src[len_src])
	{
		len_src++;
	}
	while (len_dst < size && dst[len_dst])
		len_dst++;
	i = 0;
	j = len_dst;
	while (len_dst < size && src[i] && len_dst + i + 1 < size)
		dst[j++] = src[i++];
	if (len_dst < size)
		dst[j] = '\0';
	return (len_dst + len_src);
}
