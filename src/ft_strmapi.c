#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*str;
	size_t		size;
	unsigned int	i;

	size = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (size + 1));
	i = 0;
	if (str && s)
	{
		str[size] = '\0';
		while (s[i] != '\0')
		{
			str[i] = (*f)(i, s[i]);
			i++;
		}
		return (&str[0]);
	}
	return (NULL);
}
