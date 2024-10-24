/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:10:05 by mel-harc          #+#    #+#             */
/*   Updated: 2023/03/15 18:23:12 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static char	*ft_free(char *str, char *buff)
{
	free(str);
	free(buff);
	return (NULL);
}

static char	*ft_read(int fd, char *str)
{
	char	*buff;
	int		nb;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	nb = 1;
	while (nb && !ft_sstrchr(str, '\n'))
	{
		nb = read(fd, buff, BUFFER_SIZE);
		if (nb <= 0 && !*str)
			return (str = ft_free(str, buff));
		else if (nb == 0 && *str != '\0')
			break ;
		else if (nb == -1 && *str != '\0')
			return (ft_free(str, buff));
		buff[nb] = '\0';
		str = ft_sstrjoin(str, buff);
		if (!str)
			return (str = ft_free(str, buff));
	}
	return (free(buff), str);
}

static char	*ft_get_line(char *str)
{
	int		i;
	char	*line;

	if (ft_sstrchr(str, '\n'))
	{
		i = 0;
		while (str[i] && str[i] != '\n')
			i++;
		line = malloc((i + 2) * sizeof(char));
		if (!line)
			return (NULL);
		ft_strlcpy(line, str, (i + 2));
	}
	else
		line = ft_sstrdup(str);
	return (line);
}

static char	*ft_update_data(char *str)
{
	char	*new_data;
	int		i;
	int		size;

	if (ft_sstrchr(str, '\n'))
	{
		i = 0;
		while (str[i] && str[i] != '\n')
			i++;
		size = ft_sstrlen(str) - (i + 1);
		new_data = malloc((size + 1) * sizeof(char));
		if (!new_data)
			return (NULL);
		ft_strlcpy(new_data, (str + i + 1), (size + 1));
	}
	else
		new_data = NULL;
	free(str);
	return (new_data);
}

char	*get_next_line(int fd)
{
	static char		*str;
	char			*line;

	if (fd < 0)
		return (NULL);
	if (!str)
		str = ft_sstrdup("");
	if (!str)
		return (NULL);
	str = ft_read(fd, str);
	if (!str)
		return (NULL);
	line = ft_get_line(str);
	str = ft_update_data(str);
	return (line);
}
