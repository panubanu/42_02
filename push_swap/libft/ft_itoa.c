/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:45:27 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/17 00:07:33 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len(long num);
char	*ft_fillstr(char *str, long num, int len, int sign);

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len;
	int		sign;

	num = n;
	sign = 1;
	if (num < 0)
	{
		sign = -1;
		num = -num;
	}
	len = ft_len(num);
	if (sign == -1)
		len++;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	str = ft_fillstr(str, num, len, sign);
	return (str);
}

int	ft_len(long num)
{
	int	len;

	len = 1;
	while (num >= 10)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_fillstr(char *str, long num, int len, int sign)
{
	while (num >= 10)
	{
		str[len--] = (num % 10) + 48;
		num /= 10;
	}
	str[len--] = num + 48;
	if (sign == -1)
		str[0] = '-';
	return (str);
}

/*
int	main(void)
{
	char *s;

	s = ft_itoa(0);
	printf("ft_itoa: %s\n", s);
	free(s);

	s = ft_itoa(42);
	printf("ft_itoa: %s\n", s);
	free(s);

	s = ft_itoa(-42);
	printf("ft_itoa: %s\n", s);
	free(s);

	s = ft_itoa(2147483647);
	printf("ft_itoa: %s\n", s);
	free(s);

	s = ft_itoa(-2147483648);
	printf("ft_itoa: %s\n", s);
	free(s);

	return (0);
}
*/