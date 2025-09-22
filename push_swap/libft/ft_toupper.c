/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:53:39 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/17 00:00:47 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*
int	main(void)
{
	printf("ft_toupper: %c    toupper: %c\n", ft_toupper('a'), toupper('a'));
	printf("ft_toupper: %c    toupper: %c\n", ft_toupper('z'), toupper('z'));
	printf("ft_toupper: %c    toupper: %c\n", ft_toupper('A'), toupper('A'));
	printf("ft_toupper: %c    toupper: %c\n", ft_toupper('!'), toupper('!'));
	printf("ft_toupper: %c    toupper: %c\n", ft_toupper('4'), toupper('4'));

	return (0);
}
*/