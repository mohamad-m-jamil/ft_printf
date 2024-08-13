/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjamil <mjamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 17:29:56 by mjamil            #+#    #+#             */
/*   Updated: 2024/06/25 12:58:35 by mjamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		count;
	long	num;

	num = n;
	count = 0;
	if (num < 0)
	{
		count += ft_putchar('-');
		num = -num;
	}
	while (num >= 10)
	{
		count += ft_putnbr(num / 10);
		num = num % 10;
	}
	count += ft_putchar(num + '0');
	return (count);
}
