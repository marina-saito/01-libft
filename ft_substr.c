/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayuri- <msayuri-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 13:33:08 by msayuri-          #+#    #+#             */
/*   Updated: 2021/06/08 20:43:00 by msayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = malloc(sizeof(char) * (len + 1));
	if (substr == NULL || start > ft_strlen(s))
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(substr + i) = *(s + start + i);
		i++;
	}
	*(substr + i) = '\0';
	return (substr);
}
