/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:05:47 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/22 13:05:47 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(char type, va_list args)
{
	if (type == 'd' || type == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (type == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (type == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (type == 'p')
		return (ft_print_void_hexa(va_arg(args, void *)));
	else if (type == 'u')
		return (ft_print_uint(va_arg(args, unsigned int)));
	else if (type == 'x')
		return (ft_print_hexa(va_arg(args, unsigned int), 0));
	else if (type == 'X')
		return (ft_print_hexa(va_arg(args, unsigned int), 1));
	else if (type == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}

int	ft_printf(char const *format, ...)
{
	size_t	i;
	va_list	args;
	int		total_chars;

	total_chars = 0;
	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			total_chars += ft_type(format[i], args);
		}
		else
		{
			write(1, &format[i], 1);
			total_chars++;
		}
		i++;
	}
	va_end(args);
	return (total_chars);
}
