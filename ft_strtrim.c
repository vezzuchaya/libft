/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkakuna <vkakuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:50:06 by vkakuna           #+#    #+#             */
/*   Updated: 2021/10/27 21:09:51 by vkakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_search(char *set, char c)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == c)
			return (1);
		j++;
	}
	return (0);
}	

char	*ft_start(char *s1, char *set)
{
	int	i;

	i = 0;
	while (ft_search(set, s1[i]))
		i++;
	return (&s1[i]);
}

char	*ft_end(char *s1, char *set)
{
	int		i;

	i = ft_strlen((char *)s1);
	i--;
	while (ft_search(set, s1[i]) && i >= 0)
		i--;
	i++;
	return (&s1[i]);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*new;
	int		i;

	if (!s1 || !set)
		return (NULL);
	start = ft_start((char *)s1, (char *)set);
	end = ft_end(start, (char *)set);
	new = (char *)malloc(sizeof(char)
			* (ft_strlen(start) - ft_strlen(end) + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		new[i++] = *start;
		start++;
	}
	new[i] = '\0';
	return (new);
}
