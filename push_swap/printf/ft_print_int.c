/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:50:12 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/22 17:55:09 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	long	num;
	char	digit;
	int		count;

	num = n;
	count = 0;
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
		count++;
	}
	if (num >= 10)
		count += ft_print_int(num / 10);
	digit = (num % 10) + '0';
	write(1, &digit, 1);
	return (count + 1);
}
