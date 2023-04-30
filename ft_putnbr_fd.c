/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkakuna <vkakuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:43:02 by vkakuna           #+#    #+#             */
/*   Updated: 2021/10/26 23:25:42 by vkakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = (unsigned int)n * -1;
	}
	else
		nb = (unsigned int)n;
	if (nb >= 10)
		ft_putnbr_fd (nb / 10, fd);
	ft_putchar_fd((char)(nb % 10 + '0'), fd);
}
