/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayuri- <msayuri-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 07:06:33 by msayuri-          #+#    #+#             */
/*   Updated: 2021/06/12 09:35:16 by msayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst_copy;
	unsigned char	*src_copy;

	i = 0;
	dst_copy = (char *)dst;
	src_copy = (char *)src;
	while (i < n)
	{
		*(dst_copy + i) = *(src_copy + i);
		if (*(dst_copy + i) == (unsigned char)c)
			return ((void *)(dst_copy + i + 1));
		i++;
	}
	return (NULL);
}
