/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:06:53 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 21:30:40 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	str1[10] = "236781238";
	char	str2[10] = "236781238";

	ft_bzero(str1, 3);
	bzero(str2, 3);

	printf("ft_bzero: \"%s\"    bzero: \"%s\"\n", str1, str2);
	return (0);
}
*/