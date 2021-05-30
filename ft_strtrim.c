/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayuri- <msayuri-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 09:41:47 by msayuri-          #+#    #+#             */
/*   Updated: 2021/05/29 17:46:14 by msayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	end = ft_strlen(s1);
	while (*(s1 + start) != '\0' && ft_strchr(set, *(s1 + start)) != NULL)
		start++;
	while (end > 0 && ft_strchr(set, *(s1 + end)) != NULL)
		end--;
	if (end < start)
		end = start;
	trimmed = malloc (sizeof(char) * (end - start + 1));
	if (trimmed == NULL)
		return (NULL);
	i = 0;
	while (i <= end - start)
	{
		*(trimmed + i) = *(s1 + start + i);
		i++;
	}
	*(trimmed + i) = '\0';
	return (trimmed);
}
