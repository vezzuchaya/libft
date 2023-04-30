#include "libft.h"
#include <stdio.h>
#include <string.h>

static char	*ft_len_string(char *s, char c)
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

static int	ft_number(const char *s, char c)
{
	char			*snew;
	unsigned int	i;
	unsigned int	nb;

	nb = 0;
	i = 0;
	snew = (char *)s;
	if (s)
	{
		while (*snew == c)
			snew++;
		while (snew[i] != '\0')
		{
			if (snew[i] == c && snew[i + 1] != c)
				nb++;
			i++;
		}
	}
	return (nb);
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
	char			*snew;

	if (!s)
		return (NULL);
	snew = (char *)s;
	nb = ft_number(s, c);
	/*if (ft_strlen(s) == 0 || nb == 0)
		return (NULL);*/
	arr = (char **)malloc(sizeof(char *) * (nb + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < nb)
	{
		arr[i] = ft_len_string(&snew[i], c);
		printf("%d - %s\n", i, arr[i]);
		if (arr[i] == NULL)
			ft_free(arr, i);
		while (*snew && *snew != c)
			i++;
	}
	arr[i] = NULL;
	return (arr);
}

/*int	main(void)
{
	char **arr;
	int i; 
	i = 0;
	arr = ft_split("abcd!defg!", '!');
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	return (0);
}
*/


