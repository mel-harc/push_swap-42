/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:13:24 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/11 21:33:43 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	lens1;
	size_t	lens2;
	size_t	i;
	size_t	j;

	i = -1;
	j = 0;
	if (!s1)
		s1 = ft_strdup("");
	if (!s1 || !s2)
		return (0);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	str = (char *)malloc((lens1 + lens2) * sizeof(char) + 2);
	if (!str)
		return (NULL);
	while (++i < lens1)
		str[i] = s1[i];
	while (j < lens2)
		str[i++] = s2[j++];
	str[i++] = ' ';
	str[i] = '\0';
	return (str);
}
