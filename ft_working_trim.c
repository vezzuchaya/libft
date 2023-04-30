#include "libft.h"
#include <stdio.h> 


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substr;

	i = 0;
	if (!s)
		return ((void *)0);
	if (len > (ft_strlen(s) - start))
		substr = (char *)malloc((ft_strlen(s) - start + 1) * sizeof(char));
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

int ft_search(char *set, char c)
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
	printf("start: %s\n", &s1[i]);
	return (s1);
}

char	*ft_end(char *s1, char *set)
{
	int		i;

	i = ft_strlen((char *)s1);
	i--;
	while (ft_search(set, s1[i]))
		i--;
	i++;
	printf("end: %s\n", &s1[i]);
	return (&s1[i]);
}

char	*ft_strtrim(char const *s1, char const *set)

{
	char	*start;
	char	*end;
	char	*trimmed;

	start = ft_start((char *)s1, (char *)set);
	end = ft_end((char *)s1, (char *)set);
	ft_strlcpy(trimmed, start, ft_strlen(start));
	printf("Trimmed string: %s\n", ft_strtrim(s1, set));
	return (trimmed);
}

int main()
{
    char const	*s1 = "2111123Hello11112313";
	char const	*set = "123";
	printf("Trimmed string: %s\n", ft_strtrim(s1, set));
	return (0);
}
