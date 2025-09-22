/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:59:54 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/22 17:59:57 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned int n, int uppercase)
{
	int	count;

	if (uppercase)
		count = ft_putnbr_base(n, "0123456789ABCDEF");
	else
		count = ft_putnbr_base(n, "0123456789abcdef");
	return (count);
}

int	ft_error(char *base, int size)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (size < 1)
			return (0);
		else if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	char	c;
	int		size;
	int		count;

	count = 0;
	size = 0;
	while (base[size])
		size++;
	if (ft_error(base, size) == 0)
		return (0);
	if (nbr >= (unsigned long)size)
		count += ft_putnbr_base(nbr / size, base);
	c = base[nbr % size];
	count += write(1, &c, 1);
	return (count);
}
