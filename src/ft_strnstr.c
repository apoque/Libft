/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 19:16:32 by apoque            #+#    #+#             */
/*   Updated: 2017/11/08 19:16:36 by apoque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *src, const char *find, size_t len)
{
	char	*str;
	char	*to_find;
	size_t	i;

	str = (char *)src;
	to_find = (char *)find;
	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0' && i + ft_strlen(find) <= len)
	{
		if (ft_strncmp(src + i, find, ft_strlen(find)) == 0)
			return (str + i);
		i++;
	}
	return (NULL);
}
