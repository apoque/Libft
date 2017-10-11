#include "libft.h"
#include <string.h>
#include <stdlib.h>

int	ft_countwords(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			words++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (words);
}

char	**ft_strsplit(char const *s, char c)
{
	char		**tab;
	unsigned int	start;
	unsigned int	len;

	start = 0;
	len = 0;
	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * ft_countwords(s, c));
	if (!tab)
		return (NULL);
	while (s[start] != '\0')
	{
		while (s[start] == c && s[start] != '\0')
			start++;
		while (s[start + len] != c && s[start + len] != '\0')
			len++;
		*tab = ft_strsub(s, start, (size_t)len);
		tab++;
		start = start + len;
		len = 0;

	}
	return (tab);
}
