/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayuri- <msayuri-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 12:39:10 by msayuri-          #+#    #+#             */
/*   Updated: 2021/06/11 21:26:15 by msayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	char	*src_cpy;

	src_cpy = src;
	src_len = ft_strlen(src_cpy);
	i = 0;
	if (dstsize == 0)
		return (src_len);
	while (i < dstsize - 1)
	{
		if (*(src_cpy + i) == '\0')
			break ;
		*(dest + i) = *(src_cpy + i);
		i++;
	}
	*(dest + i) = '\0';
	return (src_len);
}
