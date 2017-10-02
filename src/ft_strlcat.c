#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	size;
	size_t	dlen;

	d = (char *)dst;
	s = (char *)src;
	size = (size_t)len;
	while (size-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	size = len - dlen;
	if (size == 0)
		return (dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (size-- >= 1)
			*d++ = *s;
		s++;
	}
	*d = '\0';
	return (dlen + s - src);
}
