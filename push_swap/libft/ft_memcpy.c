/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:31:51 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 23:07:41 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	dest1[20] = "XXXXXXXXXXXX";
	char	dest2[20] = "XXXXXXXXXXXX";
	char	src[] = "Hola";

	ft_memcpy(dest1, src, 5);
	memcpy(dest2, src, 5);

	printf("ft_memcpy: %s\n", dest1);
	printf("memcpy   : %s\n", dest2);

	return (0);
}
*/