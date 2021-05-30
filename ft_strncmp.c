/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayuri- <msayuri-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 11:40:55 by msayuri-          #+#    #+#             */
/*   Updated: 2021/05/30 12:37:09 by msayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	while (i < n && *(s1 + i) != '\0')
	{
		diff = (unsigned char)*(s1 + i) - (unsigned char)*(s2 + i);
		if (diff != 0)
			return (diff);
		i++;
	}
	if (i < n && *(s2 + i) != '\0')
		return ((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i));
	return (0);
}
