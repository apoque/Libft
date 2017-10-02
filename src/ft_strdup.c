#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	const char	*str;
	char	*dup;
	char	*trace;
	size_t		i;
	size_t		len;

	str = (const char *)s;
	len = ft_strlen(str);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	trace = (char *)dup;
	if (!dup)
		return (NULL);
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (trace);
}