/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayuri- <msayuri-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 22:11:26 by msayuri-          #+#    #+#             */
/*   Updated: 2021/06/09 22:14:34 by msayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dupstr;
	size_t	s1_len;
	size_t	i;

	s1_len = ft_strlen(s1);
	dupstr = malloc(sizeof(char) * s1_len);
	if (dupstr == NULL)
		return (NULL);
	i = 0;
	while (i <= s1_len)
	{
		dupstr[i] = s1[i];
		i++;
	}
	return (dupstr);
}
