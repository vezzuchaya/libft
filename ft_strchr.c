/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkakuna <vkakuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:06:37 by vkakuna           #+#    #+#             */
/*   Updated: 2021/10/21 21:55:13 by vkakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;
	char	*p;

	a = (char)c;
	p = (char *)s;
	while (*p != a && *p != '\0')
	{
		p++;
	}
	if (*p == a)
		return (p);
	return (NULL);
}
