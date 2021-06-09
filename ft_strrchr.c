/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayuri- <msayuri-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 21:22:40 by msayuri-          #+#    #+#             */
/*   Updated: 2021/06/08 21:15:32 by msayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	size_t	s_len;

	s_len = ft_strlen(s);
	i = s_len;
	while (*(s + i) != (char)c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return ((char *)(s + i));
}
