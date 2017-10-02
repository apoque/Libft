#include "libft.h"
#include <string.h>

size_t	ft_strlen(const char *s)
{
	const char	*str;

	str = (const char *)s;
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
