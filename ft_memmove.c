/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayuri- <msayuri-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 18:44:16 by msayuri-          #+#    #+#             */
/*   Updated: 2021/06/12 09:44:46 by msayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;
	char		*s;
	long int	long_len;

	if (!dst && !src)
		return (NULL);
	long_len = len;
	if (src > dst || (dst - src >= long_len))
		return (ft_memcpy(dst, src, len));
	i = len - 1;
	s = (char *)dst;
	while (i >= 0)
	{
		*(s + i) = *((char *)src + i);
		i--;
	}
	return ((void *)s);
}
