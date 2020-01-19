/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquamar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 16:32:35 by aquamar           #+#    #+#             */
/*   Updated: 2020/01/18 18:10:46 by aquamar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;
	size_t	l1;
	size_t	l2;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (l1 + l2) + 1);
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		new[j++] = s1[i++];
	i = 0;
	while (s2[i])
		new[j++] = s2[i++];
	new[j] = '\0';
	return (new);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	int		i;
	char	*new;

	i = 0;
	if (!s)
		return ("\0");
	if (ft_strlen(s) < (size_t)start)
		len = 0;
	new = (char *)malloc((size_t)(len + 1) * sizeof(char));
	if (!new)
		return ("\0");
	while (len--)
	{
		new[i] = *(s + start);
		start++;
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_strdup(const char *str)
{
	char	*new;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(str);
	new = (char *)malloc(sizeof(char) * len + 1);
	if (!new)
		return ("\0");
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
