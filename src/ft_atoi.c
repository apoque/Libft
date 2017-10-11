#include "libft.h"

int	ft_atoi(const char *str)
{
	int	neg;
	int	res;

	neg = 1;
	res = 0;
	while ((unsigned char)*str < 33)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str != '\0' && ft_isdigit(*str))
	{
		res = res * 10 + (int)*str - 48;
		str++;
	}
	if (neg == -1)
		return (-res);
	else
		return (res);
}
