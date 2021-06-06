/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayuri- <msayuri-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 08:12:24 by msayuri-          #+#    #+#             */
/*   Updated: 2021/06/06 08:20:56 by msayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	crop_at_char(const char *src, char **dest, char c);

char	**ft_split(char const *str, char c)
{
	char	**splitted;
	size_t	str_len;
	size_t	i;
	size_t	j;

	str_len = ft_strlen(str);
	splitted = malloc(sizeof(char *) * (str_len / 2 + 1));
	i = 0;
	j = 0;
	while (i < str_len)
	{
		while (*(str + i) == c && i < str_len)
			i++;
		i += crop_at_char(str + i, &(splitted[j]), c);
		j++;
	}
	splitted[j] = 0;
	return (splitted);
}

static int	crop_at_char(const char *src, char **dest, char c)
{
	size_t	i;
	size_t	cropped_len;

	cropped_len = 0;
	while (src[cropped_len] != c && src[cropped_len] != '\0')
		cropped_len++;
	*dest = malloc(sizeof(char) * (cropped_len + 1));
	if (cropped_len == 0 || dest == NULL)
	{
		(*dest) = 0;
		return (0);
	}
	i = 0;
	while (i < cropped_len)
	{
		(*dest)[i] = src[i];
		i++;
	}
	(*dest)[i] = '\0';
	return (cropped_len);
}
