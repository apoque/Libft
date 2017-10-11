#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	size;

	size = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str && s)
	{
		str[size] = '\0';
		while (s)
			*str++ = (*f)(*s++);
		return (&str[0]);
	}
	return (NULL);
}
