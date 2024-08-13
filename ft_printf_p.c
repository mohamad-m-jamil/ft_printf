/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjamil <mjamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:39:25 by mjamil            #+#    #+#             */
/*   Updated: 2024/06/25 14:07:38 by mjamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		ft_putstr("(nil)");
		return (5);
	}
	count += ft_putstr("0x");
	count += ft_puthex((unsigned long long)ptr, 0);
	return (count);
}
