#include "libft.h"

void	ft_putnbr_fe(int n, int fd)
{
	ft_putstr_fd(ft_itoa(n), fd);
}
