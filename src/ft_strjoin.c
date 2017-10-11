#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	size;
	char	*str;

	size = (int)ft_strlen(s1) + (int)ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str || !s1 || !s2)
		return (NULL);
	while (s1)
		*str++ = *s1++;
	while (s2)
		*str++ = *s2++;
	*str = '\0';
	return (&str[0]);
}
