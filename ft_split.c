/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkakuna <vkakuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:14:57 by vkakuna           #+#    #+#             */
/*   Updated: 2021/10/27 18:12:46 by vkakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static char	*ft_len_string(const char *s, char c)
{
	unsigned int	i;
	char			*string;

	i = 0;
	while (*s && *s == c)
		s++;
	while (s[i] != c && s[i])
		i++;
	string = (char *)malloc(sizeof(char) * (i + 1));
	if (string == NULL)
		return (NULL);
	i = 0;
	while (s[i] != c && s[i])
	{
		string[i] = s[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

static int	ft_count(const char *s, char c)
{
	unsigned int	i;
	unsigned int	wd;

	wd = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			wd++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (wd);
}

void	ft_free(char **arr, int i)
{
	while (i > 0)
	{
		free(arr[i - 1]);
		i--;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	unsigned int	i;
	unsigned int	nb;

	if (!s)
		return (NULL);
	nb = ft_count(s, c);
	arr = (char **)malloc(sizeof(char *) * (nb + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < nb)
	{
		while (*s && *s == c)
			s++;
		arr[i] = ft_len_string(s, c);
		if (arr[i] == NULL)
			ft_free(arr, i);
		while (*s && *s != c)
			s++;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

/*int main ()
{
	char *s = "Hello123hello";
	char c = '1';
	ft_split(s, c);
	return (0);
}

	wd = 0;
	i = 0;

	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			wd++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (wd);
}
}

	unsigned int	i;
	unsigned int	wd;

	nb = 0;
	i = 0;
	inword = 0;
	while (s && *s)
	{
		while (*s == c && *s != '\0')
			s++;
		while (s[i] != c)
		{
			i++;
		}	
		wd++;
		if (s[i] != c)
			wd++;
		i++;
	}
*/