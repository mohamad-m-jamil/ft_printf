/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjamil <mjamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:00:17 by mjamil            #+#    #+#             */
/*   Updated: 2024/06/25 13:00:52 by mjamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int	count;

	count = 0;
	while (n >= 10)
	{
		count += ft_putunbr(n / 10);
		n = n % 10;
	}
	count += ft_putchar(n + '0');
	return (count);
}
