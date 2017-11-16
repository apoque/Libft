/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 19:11:59 by apoque            #+#    #+#             */
/*   Updated: 2017/11/16 11:07:38 by apoque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

static int	ft_power(int power)
{
	int i;

	i = 1;
	while (power > 1)
	{
		i = i * 10;
		power--;
	}
	return (i);
}

void		ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	c;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		i = ft_len(n);
		while (i > 0)
		{
			c = '0' + n / ft_power(i);
			ft_putchar_fd(c, fd);
			n = n % ft_power(i);
			i--;
		}
	}
}
