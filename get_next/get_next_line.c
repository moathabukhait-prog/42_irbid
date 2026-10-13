/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabukhai <mabukhai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:57:25 by mabukhai          #+#    #+#             */
/*   Updated: 2026/10/13 13:57:49 by mabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

static char	*read_to_stash(char *stash, int fd)
{
	char	*buf;
	char	*joined;
	size_t	bytes;

	buf = malloc((size_t)BUFFER_SIZE + 1);
	if (!buf)
		return (free(stash), NULL);
	bytes = 1;
	while (!ft_strchr(stash, '\n') && bytes > 0)
	{
		bytes = read(fd, buf, BUFFER_SIZE);
		if (bytes < 0)
		{
			free(buf);
			free(stash);
			return (NULL);
		}
		buf[bytes] = '\0';
		if (bytes > 0)
		{
			joined = ft_strjoin(stash, buf);
			free(stash);
			stash = joined;
			if (!stash)
				break ;
		}
	}
	free(buf);
	return (stash);
}

static char	*extract_line(char **stash)
{
	char	*line;
	char	*rest;
	size_t	len;

	len = 0;
	while ((*stash)[len] && (*stash)[len] != '\n')
		len++;
	if ((*stash)[len] == '\n')
		len++;
	line = ft_substr(*stash, 0, len);
	if (!line)
		return (NULL);
	rest = ft_substr(*stash, len, ft_strlen(*stash) - len);
	if (!rest)
		return (free(line), NULL);
	free(*stash);
	if (*rest)
		*stash = rest;
	else
	{
		free(rest);
		*stash = NULL;
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*stash;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = read_to_stash(stash, fd);
	if (!stash)
		return (NULL);
	return (extract_line(&stash));
}
