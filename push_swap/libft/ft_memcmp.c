/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>            +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 21:01:57 by marvin            #+#    #+#             */
/*   Updated: 2025/04/09 21:01:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] - str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[] = "abcdef";
	char s2[] = "abcdeF";

	printf("ft_memcmp: %d    
	memcmp: %d\n", ft_memcmp(s1, s2, 6), memcmp(s1, s2, 6));
	printf("ft_memcmp: %d   
	 memcmp: %d\n", ft_memcmp(s1, s2, 5), memcmp(s1, s2, 5));
	printf("ft_memcmp: %d    
	memcmp: %d\n", ft_memcmp(s1, s1, 6), memcmp(s1, s1, 6));

	return (0);
}
*/