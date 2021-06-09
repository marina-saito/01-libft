/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayuri- <msayuri-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 13:33:08 by msayuri-          #+#    #+#             */
/*   Updated: 2021/06/09 07:17:15 by msayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	min_size_t(size_t num1, size_t num2);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	sub_len;
	char	*substr;
	size_t	i;

	s_len = ft_strlen(s);
	if (start > s_len)
		sub_len = 0;
	else
		sub_len = min_size_t(len, s_len - start);
	substr = malloc(sizeof(char) * (sub_len + 1));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < sub_len)
	{
		if (*(s + start + i) == 0)
			break ;
		*(substr + i) = *(s + start + i);
		i++;
	}
	*(substr + i) = '\0';
	return (substr);
}

static size_t	min_size_t(size_t num1, size_t num2)
{
	if (num1 < num2)
		return (num1);
	else
		return (num2);
}
