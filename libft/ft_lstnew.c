/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabukhai <mabukhai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 08:47:18 by mabukhai          #+#    #+#             */
/*   Updated: 2026/09/19 08:52:42 by mabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	it_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new ->content = content;
	new ->next = NULL;
	return (new);
}
