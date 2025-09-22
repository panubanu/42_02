/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>     	      +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 22:05:35 by marvin            #+#    #+#             */
/*   Updated: 2025/04/09 22:05:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	result;
	int		i;
	int		sign;

	sign = 1;
	i = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return ((int)(sign * result));
}
/* 
int	main(void)
{
	printf("ft_atoi: %d    atoi: %d\n", ft_atoi("42"), atoi("42"));
	printf("ft_atoi: %d    atoi: %d\n", ft_atoi("   -12 3"), atoi("   -12 3"));
	printf("ft_atoi: %d    atoi: %d\n", ft_atoi("++7"), atoi("++7"));
	printf("ft_atoi: %d    atoi: %d\n", ft_atoi("0000456"), atoi("0000456"));
	printf("ft_atoi: %d    atoi: %d\n", ft_atoi("abcd"), atoi("abcd"));
	printf("ft_atoi: %d    atoi: %d\n", ft_atoi("123abc456"), atoi("123abc456"));
	return (0);
}
*/
