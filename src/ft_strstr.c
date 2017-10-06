#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *src, const char *find)
{
	size_t	len;

	len = ft_strlen(find);
	if (*find == '\0' || !find)
		return ((char *)find);
	while (*src)
	{
		if (ft_strncmp(src, find, len)== 0)
			return ((char *)src);
		src++;
	}
	return (NULL);
}
