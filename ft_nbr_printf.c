#include "ft_printf.h"
#include "Libft/libft.h"

int	ft_nbrlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n == -2147483648)
	{
		len += 2;
		n = 147483648;
	}
	else if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_nbr_printf(int n)
{
	ft_putnbr_fd(n, 1);
	return (ft_nbrlen(n));
}
