/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 18:03:10 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 23:58:52 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*
int	main(void)
{
	printf("ft_tolower: %c    tolower: %c\n", ft_tolower('A'), tolower('A'));
	printf("ft_tolower: %c    tolower: %c\n", ft_tolower('Z'), tolower('Z'));
	printf("ft_tolower: %c    tolower: %c\n", ft_tolower('a'), tolower('a'));
	printf("ft_tolower: %c    tolower: %c\n", ft_tolower('!'), tolower('!'));
	printf("ft_tolower: %c    tolower: %c\n", ft_tolower('4'), tolower('4'));

	return (0);
}
*/