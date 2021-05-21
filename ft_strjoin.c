/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayuri- <msayuri-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 14:37:24 by msayuri-          #+#    #+#             */
/*   Updated: 2021/05/15 18:32:17 by msayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*strjoin;
	size_t	i;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	strjoin = malloc(sizeof(char) * (s1len + s2len + 1));
	if (strjoin == NULL)
		return (NULL);
	i = 0;
	while (i < s1len)
	{
		*(strjoin + i) = *(s1 + i);
		i++;
	}
	while (i < (s1len + s2len))
	{
		*(strjoin + i) = *(s2 + i - s1len);
		i++;
	}
	*(strjoin + i) = '\0';
	return (strjoin);
}
