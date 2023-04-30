/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkakuna <vkakuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:04:32 by vkakuna           #+#    #+#             */
/*   Updated: 2021/10/26 21:33:31 by vkakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sign(char *str, int i, int *sign)
{
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign = -1;
		i++;
	}
	return (i);
}

int	ft_len(int len, int sign)
{
	if (len > 19 && sign == 1)
		return (-1);
	else if (len > 19 && sign != 1)
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int				i;
	long long int	nb;
	int				sign;
	int				len;

	i = 0;
	nb = 0;
	sign = 1;
	len = 0;
	while ((str[i] >= '\t' && str [i] <= '\r') || (str[i] == ' '))
		i++;
	i = ft_sign((char *)str, i, &sign);
	while (str[i] <= '9' && str[i] >= '0')
	{
		nb = 10 * nb + (str[i] - '0');
		i++;
		len++;
	}
	if (ft_len(len, sign) != 1)
		return (ft_len(len, sign));
	return (nb * sign);
}
