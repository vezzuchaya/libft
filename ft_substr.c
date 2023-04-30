/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkakuna <vkakuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:58:18 by vkakuna           #+#    #+#             */
/*   Updated: 2021/10/27 22:11:45 by vkakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> 
#include <string.h> 

size_t	ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substr;
	int				sub_len;

	i = 0;
	if (!s)
		return ((void *)0);
	if (start > ft_strlen(s))
		sub_len = 0;
	else
		sub_len = ft_strlen(s) - start;
	if (len > (ft_strlen(s)))
		substr = (char *)malloc((sub_len + 1) * sizeof(char));
	else
		substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return ((void *)0);
	while (*s && i < len && start <= (ft_strlen(s) - 1))
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}

/*
	if (len > start)
	{
		if (start == '\0')
			substr = (char *)malloc(s_len * sizeof(char) + 1);
		if (substr == NULL)
			return ((void *)0);
	}
	*/