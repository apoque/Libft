#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t len)
{
	char	*tmp;

	tmp = (char *)dest;
	while (tmp)
		tmp++;
	while (len-- > 0 && *src != '\0')
		*tmp++ = *src++;
	*tmp = '\0';
	return (dest);
}
