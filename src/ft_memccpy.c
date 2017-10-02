#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*tmp;
	const char	*cpy;

	tmp = (char *)dest;
	cpy = (const char*)src;
	while(n--)
	{
		if (*cpy == c)
			return(tmp++);
		else
		{
			*tmp = *cpy;
			tmp++;
			cpy++;
		}
	}
	return(NULL);
}
