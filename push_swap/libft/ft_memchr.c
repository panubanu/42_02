/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>     	      +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:19:21 by marvin            #+#    #+#             */
/*   Updated: 2025/04/09 20:19:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		ch;
	size_t				i;

	i = 0;
	str = (const unsigned char *)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == ch)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char str[] = "Hola mundo";

	printf("ft_memchr: %s\n", (char *)ft_memchr(str, 'm', 10));
	printf("memchr   : %s\n", (char *)memchr(str, 'm', 10));

	printf("ft_memchr: %s\n", (char *)ft_memchr(str, 'z', 10));
	printf("memchr   : %s\n", (char *)memchr(str, 'z', 10));

	return (0);
}
*/