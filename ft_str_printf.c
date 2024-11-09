#include "libftprintf.h"
#include "Libft/libft.h"

int ft_str_printf(char *str) 
{
	int i;

	i = 0;
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return(6);
	}
	ft_putstr_fd(str, 1);
	while (str[i] != '\0')
		i++;
	return (i);
}

