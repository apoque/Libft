#include <string.h>
#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*tmp;

	tmp = (void *)malloc(sizeof(void *) * n);

	if (!tmp)
		return(NULL);
	else
	{
		ft_memcpy(tmp, src, n);
		ft_memcpy(dest, tmp, n);
		free(tmp);
		return(dest);
	}
}
