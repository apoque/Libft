#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	char	*tmp;
	char	ch;

	tmp = (char *)str;
	ch = (char)c;
	while (*tmp != ch && *tmp != '\0')
		tmp++;
	if (*tmp == '\0')
		return (NULL);
	else
		return (tmp);
}
