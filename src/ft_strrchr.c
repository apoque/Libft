#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*tmp;
	char	*last_position;
	char	car;

	tmp = (char *)str;
	last_position = NULL;
	car = (char)c;
	while (*tmp != '\0')
	{
		if (*tmp == car)
			last_position = tmp;
		tmp++;
	}
	return (last_position);
}
