/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:09:11 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/15 22:05:36 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	i = ft_strlen(src);
	if (dstsize == 0)
		return (i);
	while (src[j] != '\0' && j < dstsize - 1)
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

size_t	ft_sstrlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_sstrjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	lens1;
	size_t	lens2;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	str = (char *)malloc((lens1 + lens2) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (i < lens1)
	{
		str[i] = s1[i];
		i++;
	}
	while (j < lens2)
		str[i++] = s2[j++];
	str[i] = '\0';
	free((char *)s1);
	return (str);
}

char	*ft_sstrchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}

char	*ft_sstrdup(const char *s1)
{
	int		i;
	char	*src;

	if (!s1)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
		i++;
	src = malloc(i * sizeof(char) + 1);
	if (!src)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		src[i] = s1[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}
