/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>     	      +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 21:19:24 by marvin            #+#    #+#             */
/*   Updated: 2025/04/09 21:19:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	little_len = ft_strlen(little);
	i = 0;
	if (little_len == 0)
		return ((char *)&big[i]);
	while (big[i] != '\0' && little_len + i <= len)
	{
		j = 0;
		while (little[j] != '\0' && big[i + j] == little[j])
		{
			j++;
			if (j == little_len)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char *big = "Hola mundo 42";
	char *little = "mun";

	printf("ft_strnstr: %s\n", ft_strnstr(big, little, 11));

	printf("ft_strnstr: %s\n", ft_strnstr(big, little, 5));

	printf("ft_strnstr: %s\n", ft_strnstr(big, "", 5));

	return (0);
}
*/