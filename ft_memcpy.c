/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayuri- <msayuri-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 07:06:33 by msayuri-          #+#    #+#             */
/*   Updated: 2021/06/11 20:51:29 by msayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)dst;
	if (src == NULL || dst == NULL)
		return (NULL);
	while (i < n)
	{
		*(s + i) = *((char *)src + i);
		i++;
	}
	return ((void *)s);
}
