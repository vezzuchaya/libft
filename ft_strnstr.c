/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkakuna <vkakuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:33:39 by vkakuna           #+#    #+#             */
/*   Updated: 2021/10/27 21:29:37 by vkakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)

{
	unsigned int	hay;
	unsigned int	n;

	hay = ft_strlen(haystack);
	n = ft_strlen(needle);
	while (hay >= n && len >= n)
	{
		if (!(ft_strncmp(haystack, needle, n)) && len >= n)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

/*int main()
{
    char const	*s1 = "2111123Hello11112313";
	char const	*set = "123";
	printf("Trimmed string: %s\n", ft_strtrim(s1, set));
	return (0);
}
*/