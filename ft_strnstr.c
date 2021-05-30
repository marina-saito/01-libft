/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayuri- <msayuri-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 22:27:18 by msayuri-          #+#    #+#             */
/*   Updated: 2021/05/30 00:06:41 by msayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (i < len && *(haystack + i) != '\0')
	{
		j = 0;
		while (j < needle_len && i < len && *(haystack + i) == *(needle + j))
		{
			i++;
			j++;
		}
		if (j == needle_len)
			return ((char *)(haystack + i - j));
		i++;
	}
	return (NULL);
}
