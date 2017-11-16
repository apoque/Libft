/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 19:01:02 by apoque            #+#    #+#             */
/*   Updated: 2017/11/16 10:59:39 by apoque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_max(unsigned long long nb, int neg)
{
	if (nb >= 9223372036854775807 && neg == 0)
		return (-1);
	if (nb > 9223372036854775807 && neg == 1)
		return (0);
	if (neg == 1)
		return (-nb);
	return (nb);
}

int			ft_atoi(const char *str)
{
	int					i;
	int					neg;
	unsigned long long	nb;

	i = 0;
	neg = 0;
	nb = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (check_max(nb, neg));
}
