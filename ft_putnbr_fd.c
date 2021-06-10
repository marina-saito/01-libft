/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msayuri- <msayuri-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 07:31:55 by msayuri-          #+#    #+#             */
/*   Updated: 2021/06/10 07:54:36 by msayuri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 10 || n <= -10)
		ft_putnbr_fd(n / 10, fd);
	if (n >= 0)
		ft_putchar_fd('0' + n % 10, fd);
	else
	{
		if (n > -10)
			ft_putchar_fd('-', fd);
		ft_putchar_fd('0' - n % 10, fd);
	}
}
