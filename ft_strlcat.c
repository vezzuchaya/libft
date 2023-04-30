/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkakuna <vkakuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:00:07 by vkakuna           #+#    #+#             */
/*   Updated: 2021/10/23 16:25:16 by vkakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)


{
	size_t	end;
	size_t	i;
	size_t	len_dst;

	i = 0;
	len_dst = ft_strlen(dst);
	end = len_dst;
	if (len_dst + 1 > dstsize)
		return (dstsize + ft_strlen(src));
	if (len_dst + 1 < dstsize)
	{
		while (src[i] && end < dstsize - 1)
		{
			dst[end] = src[i];
			end++;
			i++;
		}
	}
	dst[end] = '\0';
	return (len_dst + (ft_strlen(src)));
}
