#include "libftprintf.h"
#include "Libft/libft.h"
#define min_int -2147483648

static int ft_args(va_list args, char var_type);

int ft_printf(const char *argument, ...)
{
	va_list args;
	
	va_start(args, argument);
	int	counter;
	int	i;
	i = -1;
	counter = 0;
	while (argument[i]  != '\0')
	{
		if (argument[i] == '%') 
			counter +=ft_args(args, argument[++i]);
		else 
		{
			write(1, &argument[i], 1);
			i++;
			counter++;
		}
		va_end(args);
		return (counter);
	}
}

static int ft_args(va_list args, char var_type)
{
			// Acess the first argument (type char *)
			if (var_type == 's')
				return (ft_str_printf(va_arg(args, char *)));
			// Acess the second argument (type int)
			else if (var_type == 'i')
				return (ft_nbr_printf(va_arg(args, int)));
			else if (var_type == 'c')
				ft_putchar_fd(va_arg(args, int), 1);
			else if (var_type  == 'p')
					return (ft_pointer_printf(va_arg(args, void *)));	
			else if (var_type == 'd')
			   ft_decimal_printf(va_arg(args, int));
			else if (var_type == 'u')
				 ft_nbr_printf(va_arg(args, unsigned int));	
			else if (var_type == 'x')
				ft_hexa_printf(va_arg(args, unsigned int), 0);
			else if (var_type == 'X')
				ft_hexa_printf(va_arg(args, unsigned int), 1);
			else if (var_type == '%')
				ft_putchar_fd('%', 1);
		if ( var_type == '%' || var_type == 'c')
			return (1);
		else
			return (0);
}

int main(void)
{
	int a = 145;
	ft_printf("Mine: %s, %i, %c, %p, %d, %u, %x, %X\n", "World", a, 'A', &a, 145, 145, 4282, 462);
	printf("Original: %s, %i, %c, %p, %d, %u, %x, %X\n", "World", a, 'A', &a, 145, 145, 4282, 462);
	return 0;
	
}
