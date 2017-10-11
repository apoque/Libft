#include "libft.h"
#include <string.h>
#include <stdlib.h>

int	ft_power(long n)
{
	int		power;

	power = 1;
	while (n > 9)
	{
		n = n / 10;
		power++;
	}
	return (power);
}

char	*ft_itoa(int n)
{
	long		nbr;
	int		power;
	int		neg;
	char		*nb;

	neg = (n < 0) ? 1 : 0;
	nbr = (n < 0) ? -n : n;
	power = ft_power(nbr);
	nb = (char *)malloc(sizeof(char) * (power + neg + 1));
	if(!nb)
		return (NULL);
	if (neg == 1)
		nb[0] = '-';
	nb[power + neg] = '\0';
	while (nbr != 0)
	{
		nb[power + neg - 1] = nbr % 10 + 48;
		power--;
		nbr = nbr / 10;
	}
	return (&nb[0]);
}
