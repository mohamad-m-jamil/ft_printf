/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjamil <mjamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 12:27:37 by mjamil            #+#    #+#             */
/*   Updated: 2024/06/25 13:13:37 by mjamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_conversion(char conversion, va_list args)
{
	if (conversion == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (conversion == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (conversion == 'p')
		return (ft_putptr(va_arg(args, void *)));
	if (conversion == 'd' || conversion == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (conversion == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	if (conversion == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 0));
	if (conversion == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 1));
	if (conversion == '%')
		return (ft_putchar('%'));
	return (0);
}

static int	ft_process_format(const char *format, va_list args)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_print_conversion(format[i], args);
		}
		else
		{
			count += ft_putchar(format[i]);
		}
		i++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = ft_process_format(format, args);
	va_end(args);
	return (count);
}
