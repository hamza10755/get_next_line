/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 17:18:51 by hbelaih           #+#    #+#             */
/*   Updated: 2024/10/23 13:05:37 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(char *s)
{
	char	*dst;
	size_t	len;
	size_t	i;

	len = ft_len(s) + 1;
	dst = malloc(len);
	i = 0;
	if (!dst)
	{
		return (NULL);
	}
	while (i < len)
	{
		dst[i] = s[i];
		i++;
	}
	return (dst);
}

char	*ft_strchr(const char *s, int c)
{
	char	*l;
	size_t	i;

	l = (char *)s;
	i = 0;
	while (l[i] != '\0' && l[i])
	{
		if (l[i] == (char)c)
		{
			return (l);
		}
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1)
	{
		str = malloc(1);
		str[0] = '\0';
	}
	if (!s1 && !s2)
		return (NULL);
	str = malloc(sizeof(char) * (ft_len(s1) + ft_len(s2) + 1));
	if (!str)
		return (NULL);
	i--;
	while (s1[++i] && s1)
		str[i] = s1[i];
	j--;
	while (s2[++j])
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}

size_t	ft_len(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}
