/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkakuna <vkakuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:02:14 by vkakuna           #+#    #+#             */
/*   Updated: 2021/10/17 19:05:59 by vkakuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		c = c + 32;
	}
	return (c);
}

/*int main()
{
    int    a;
    a = 90;
    printf("My result: %c\n", (ft_toupper(a)));
    return (0);
}
*/