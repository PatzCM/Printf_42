
#include "libftprintf.h"
#include "Libft/libft.h"

int	ft_hexa_printf(unsigned int n, int upper_or_lower)
{
	char	*base;
	char	digit[9];
	int		i;

	i = 0;
	if (upper_or_lower == 0)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	while (n > 0)
	{
		digit[i++] = base[n % 16];
		n = n / 16;
	}
	int len = i;
	while (--i >= 0)
	{
		ft_putchar_fd(digit[i], 1);
	}
	return (len);
}
