/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayuri- <msayuri-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 09:41:47 by msayuri-          #+#    #+#             */
/*   Updated: 2021/05/22 23:52:37 by msayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_set_on_beginning(char const *s, char const *set);
static size_t	find_set_on_end(char const *s, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;
	size_t	i;

	start = find_set_on_beginning(s1, set);
	end = find_set_on_end(s1, set);
	if (end < start)
		end = ft_strlen(s1);
	trimmed = malloc (sizeof(char) * (end - start + 2));
	if (trimmed == NULL)
		return (NULL);
	i = 0;
	while (i < end - start)
	{
		*(trimmed + i) = *(s1 + start + i);
		i++;
	}
	*(trimmed + i) = '\0';
	return (trimmed);
}

static size_t	find_set_on_beginning(char const *s, char const *set)
{
	size_t	i;

	i = 0;
	while (*(s + i) == *(set + i) && *(set + i) != '\0')
		i++;
	if (i != ft_strlen(set))
		return (0);
	return (i);
}

static size_t	find_set_on_end(char const *s, char const *set)
{
	size_t	i;
	size_t	s_len;
	size_t	set_len;

	s_len = ft_strlen(s);
	set_len = ft_strlen(set);
	i = s_len;
	while (i > 0 && *(s + i) == *(set + (set_len - (s_len - i))))
		i--;
	if (s_len - i - 1 != set_len)
		return (s_len);
	return (i + 1);
}
