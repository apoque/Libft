#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)str;
	if (tmp)
	{
		while (len--)
		{
			if (tmp == (unsigned char *)c)
				return(tmp);
			else
				tmp++;
		}
	}
	return(NULL);
}
