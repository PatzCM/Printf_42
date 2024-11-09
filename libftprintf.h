#ifndef LIBFTPRINT_H
# define LIBFTPRINT_H

# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *argument, ...);
int ft_pointer_printf(void *hex);
int	ft_decimal_printf(int n);
int	ft_hexa_printf(unsigned int n, int upper_or_lower);
int	ft_nbr_printf(int n);
int ft_str_printf(char *str); 

#endif
