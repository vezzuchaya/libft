/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkakuna <vkakuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:42:40 by vkakuna           #+#    #+#             */
/*   Updated: 2021/10/21 23:12:45 by vkakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*a;
	char		*b;

	i = 0;
	a = (char *)src;
	b = (char *)dst;
	if (a == NULL && b == NULL)
		return (NULL);
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (b);
}
