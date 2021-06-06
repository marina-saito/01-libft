/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayuri- <msayuri-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 15:29:44 by msayuri-          #+#    #+#             */
/*   Updated: 2021/06/06 15:59:22 by msayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	size_t	i;
	char	*strmapi;

	i = 0;
	s_len = ft_strlen(s);
	strmapi = malloc(sizeof(char) * (s_len + 1));
	if (strmapi == NULL)
		return (NULL);
	while (i < s_len)
	{
		strmapi[i] = (*f)(i, s[i]);
		i++;
	}
	strmapi[i] = '\0';
	return (strmapi);
}
