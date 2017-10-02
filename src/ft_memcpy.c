#include <string.h>
#include "libft.h"

/*
 * pourquoi utilise-t-on un const char pour se deplacer sur src au lieu
 * de directment se deplacer dessus ?
 */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*tmp;
	const char	*cpy;

	tmp = (char*)dest;
	cpy = (const char*)src;
	while (n--)
	{
		*tmp = *cpy;
		tmp++;
		cpy++;
	}
	return(dest);
}
