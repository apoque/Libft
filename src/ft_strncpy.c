#include "libft.h"
#include <string.h>

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	char	*tmp;

	tmp = (char *)dest;
	while (len--)
	{
		if (*src)
			*tmp++ = *src++;
		else
			*tmp = '\0';
	}
	return (dest);
}
