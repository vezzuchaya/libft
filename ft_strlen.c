/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkakuna <vkakuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:48:17 by vkakuna           #+#    #+#             */
/*   Updated: 2021/10/23 11:11:08 by vkakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;
	int	count;

	i = 0;
	while (s[i] != '\0')
	{
		count = i + 1;
		i++;
	}
	return (count);
}
