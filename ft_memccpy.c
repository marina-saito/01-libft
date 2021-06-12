/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayuri- <msayuri-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 07:06:33 by msayuri-          #+#    #+#             */
/*   Updated: 2021/06/11 21:31:07 by msayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)dst;
	while (i < n)
	{
		*(s + i) = *((char *)src + i);
		if ((unsigned char)*(s + i) == (unsigned char)c)
			return ((void *)(s + i + 1));
		i++;
	}
	return (NULL);
}
