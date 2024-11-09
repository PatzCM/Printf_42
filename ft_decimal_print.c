#include "Libft/libft.h"
#include "libftprintf.h"

void	ft_decimal_printf(int n)
{
	int digit[10];
	int i;

	i = 0;
	
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
		return ;
	}
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n = n * -1;
	}
	while (n > 0)
	{
		digit[i++] = n % 10;
		n = n / 10;
	}
	while (--i >= 0)
	{
		ft_putnbr_fd(digit[i], 1);
	}
}
