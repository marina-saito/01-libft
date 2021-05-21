/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayuri- <msayuri-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 09:41:47 by msayuri-          #+#    #+#             */
/*   Updated: 2021/05/18 21:20:41 by msayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Criar e usar strchr e strrchr para deixar essa função mais curta
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;
	size_t	i;
	size_t	set_len;

	i = 0;
	start = 0;
	if (ft_strlen(s1) == 0)
		end = 0;
	else
		end = ft_strlen(s1) - 1;
	set_len = ft_strlen(set);
	while (*(s1 + i) == *(set + i) && *(set + i) != '\0')
		i++;
	if (i == set_len)
		start = i;
	i = 0;
	while (*(s1 + (end - set_len + 1) + i) == *(set + i) && *(set + i) != '\0')
		i++;
	if (i == set_len && end >= set_len)
		end = end - set_len;
	if (start < end)
		trimmed = malloc (sizeof(char) * (end - start + 2));
	else
		trimmed = malloc(sizeof(char) * 1);
	if (trimmed == NULL)
		return (NULL);
	i = 0;
	while (i + start <= end)
	{
		*(trimmed + i) = *(s1 + start + i);
		i++;
	}
	*(trimmed + i) = '\0';
	return (trimmed);
}

static char	*ft_strtrim_start(char const *s, char const *set)
{
	char	*trimmed;
	size_t	i;
	size_t	s_len;
	size_t	set_len;
	size_t	start;

	s_len = ft_strlen(s);
	set_len = ft_strlen(set);
	i = 0;
	start = 0;
	while (*(s + i) == *(set + i) && *(set + i) != '\0')
		i++;
	if (i == set_len)
		start = i;
	trimmed = malloc (sizeof(char) * (s_len - start + 2));
	if (trimmed == NULL)
		return (NULL);
	i = 0;
	while (i + start < s_len)
	{
		*(trimmed + i) = *(s1 + start + i);
		i++;
	}
	*(trimmed + i) = '\0';
	return (trimmed);
}

static char	*ft_strtrim_end(char const *s, char const *set)
{
	char	*trimmed;
	size_t	i;
	size_t	s_len;
	size_t	set_len;
	size_t	end;

	s_len = ft_strlen(s);
	set_len = ft_strlen(set);
	i = 0;
	end = s_len - 1;
	while (*(s + (end - set_len + 1) + i) == *(set + i) && *(set + i) != '\0')
		i++;
	if (i == set_len && end >= set_len)
		end = end - set_len;
	trimmed = malloc (sizeof(char) * (s_len - start + 2));
	if (trimmed == NULL)
		return (NULL);
	i = 0;
	while (i + start < s_len)
	{
		*(trimmed + i) = *(s1 + start + i);
		i++;
	}
	*(trimmed + i) = '\0';
	return (trimmed);
}
