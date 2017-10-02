#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*tmp;

	tmp = (char *)src;
	while (*src)
		*tmp++ = *src++;
	*tmp = '\0';
	return (dest);
}
