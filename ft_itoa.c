/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayuri- <msayuri-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:53:14 by msayuri-          #+#    #+#             */
/*   Updated: 2021/06/11 21:40:58 by msayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_itoa_aux(int n, int idx, char *dest);

char	*ft_itoa(int n)
{
	char	*str;
	size_t	str_len;
	int		n_copy;

	str_len = 0;
	n_copy = n;
	while (n_copy != 0)
	{
		n_copy /= 10;
		str_len++;
	}
	if (n <= 0)
		str_len++;
	str = malloc(sizeof(char) * (str_len + 1));
	if (str == NULL)
		return (NULL);
	ft_itoa_aux(n, str_len - 1, str);
	str[str_len] = '\0';
	return (str);
}

static void	ft_itoa_aux(int n, int idx, char *dest)
{
	if (n >= 10 || n <= -10)
		ft_itoa_aux(n / 10, idx - 1, dest);
	if (n >= 0)
		dest[idx] = (n % 10) + '0';
	else
	{
		dest[idx] = (-(n % 10)) + '0';
		if (n > -10)
			dest[idx - 1] = '-';
	}
}
