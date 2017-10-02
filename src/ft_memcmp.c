#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (len > 0 && str1 && str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		else
		{
			s1++;
			s2++;
			len--;
		}
	}
	return(0);
}
