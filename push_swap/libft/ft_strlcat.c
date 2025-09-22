/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:08:42 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 23:42:27 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	if (i >= size)
		return (size + ft_strlen(src));
	j = 0;
	while ((i + j) < (size -1) && (src[j] != '\0'))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*
int	main(void)
{
	char	dest1[20] = "Hola ";
	char	*src = "mundo!";
	size_t	size = 20;

	printf("ft_strlcat: %lu → %s\n", ft_strlcat(dest1, src, size), dest1);

	return (0);
}
*/