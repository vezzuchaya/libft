/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkakuna <vkakuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:45:55 by vkakuna           #+#    #+#             */
/*   Updated: 2021/10/27 20:13:11 by vkakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> 

static int	ft_sign(int n)
{
	int	sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	return (sign);
}

static int	ft_len(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_nul(int n, char *str)
{
	if (n == 0)
	{
		*str = '0';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		nb;
	int		sign;
	char	*str;
	int		len;

	nb = n;
	len = ft_len(nb) + (n <= 0);
	sign = ft_sign(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_nul(nb, str);
	str[len] = '\0';
	while (n != 0)
	{
		len--;
		str[len] = (n % 10) * sign + '0';
		n = n / 10;
	}
	len--;
	if (sign < 0)
		str[len] = '-';
	return (str);
}

/*int main (void)
{
	printf("%s\n", ft_itoa(-123456));
	return (0);
}
*/
