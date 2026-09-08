/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabukhai <mabukhai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 14:30:46 by mabukhai          #+#    #+#             */
/*   Updated: 2026/09/08 15:14:11 by mabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*des;
	const unsigned char		*sou;
	size_t const			i;

	dst = (unsigned char *)dest;
	sou = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst[i] = sou[i];
		i++;
	}
	return (dest);
}
