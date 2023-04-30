/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkakuna <vkakuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:21:30 by vkakuna           #+#    #+#             */
/*   Updated: 2021/10/22 11:20:50 by vkakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*str;
	unsigned int		i;	

	str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		*(str + i) = (unsigned char)c;
		i++;
	}
	return (str);
}
