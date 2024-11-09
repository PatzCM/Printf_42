/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <palexand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:02:55 by palexand          #+#    #+#             */
/*   Updated: 2024/11/09 13:02:55 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

/*int	ft_decimal_printf(int n)*/
/*{*/
/*	int	digit[10];*/
/*	int	i;*/
/*	int	len;*/
/**/
/*	i = 0;*/
/*	if (n == -2147483648)*/
/*	{*/
/*		ft_putstr_fd("-2147483648", 1);*/
/*		return (11);*/
/*	}*/
/*	if (n == 0)*/
/*	{*/
/*		ft_putchar_fd('0', 1);*/
/*		return (1);*/
/*	}*/
/*	if (n < 0)*/
/*	{*/
/*		ft_putchar_fd('-', 1);*/
/*		n = n * -1;*/
/*	}*/
/*	while (n > 0)*/
/*	{*/
/*		digit[i++] = n % 10;*/
/*		n = n / 10;*/
/*	}*/
/*	len = i;*/
/*	while (--i >= 0)*/
/*		ft_putnbr_fd(digit[i], 1);*/
/*	return (len);*/
/*}*/
