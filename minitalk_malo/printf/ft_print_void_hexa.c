/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_void_hexa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:47:24 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/22 18:45:42 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_void_hexa(void *n)
{
	unsigned long	num;
	int				count;

	if (!n)
		return (write (1, "(nil)", 5));
	count = write (1, "0x", 2);
	num = (unsigned long)n;
	count += ft_putnbr_base(num, "0123456789abcdef");
	return (count);
}
