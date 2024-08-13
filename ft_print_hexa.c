/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjamil <mjamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:14:09 by mjamil            #+#    #+#             */
/*   Updated: 2024/06/25 13:09:33 by mjamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long n, int uppercase)
{
	int		count;
	char	*base;

	count = 0;
	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	while (n >= 16)
	{
		count += ft_puthex(n / 16, uppercase);
		n = n % 16;
	}
	count += ft_putchar(base[n]);
	return (count);
}
