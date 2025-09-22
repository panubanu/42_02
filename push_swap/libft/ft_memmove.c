/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:14:10 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 23:10:52 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s && d < (s + n))
	{
		i = n;
		while (i-- > 0)
		{
			d[i] = s[i];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	str1[] = "123456789";
	char	str2[] = "123456789";

	// Regiones solapadas: copiamos dentro de la misma cadena
	ft_memmove(str1 + 2, str1, 5);
	memmove(str2 + 2, str2, 5);

	printf("ft_memmove: %s\n", str1);
	printf("memmove   : %s\n", str2);

	return (0);
}
*/	