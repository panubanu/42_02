/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:53:05 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 23:44:29 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	j = 0;
	while ((j < (size - 1)) && (src[j] != '\0'))
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

/*
int	main(void)
{
	char	src[] = "Libft";
	char	dst1[10];

	size_t	result1 = ft_strlcpy(dst1, src, sizeof(dst1));

	printf("ft_strlcpy: %s (return: %zu)\n", dst1, result1);

	return (0);
}
*/