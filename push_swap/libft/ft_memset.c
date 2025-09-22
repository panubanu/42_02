/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:52:18 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 23:12:29 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
int	main(void)
{
	char	str1[10] = "abcdefghi";
	char	str2[10] = "abcdefghi";

	ft_memset(str1, '*', 4);
	memset(str2, '*', 4);

	printf("ft_memset: %s\n", str1);
	printf("memset   : %s\n", str2);

	return (0);
}
*/