#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*tmp;

	tmp = (char *)dest;
	while (*tmp)
		tmp++;
	while (*src)
		*tmp++ = *src++;
	*tmp = '\0';
	return (dest);
}
