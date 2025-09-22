/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:42:24 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/17 00:05:36 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
int	main()
{
	printf("ft_strlen: %zu    strlen: %zu\n", ft_strlen("hola"), strlen("hola"));
	printf("ft_strlen: %zu    strlen: %zu\n", ft_strlen(""), strlen(""));
	printf("ft_strlen: %zu    strlen: %zu\n", ft_strlen("libft 
	es divertido"), strlen("libft es divertido"));
	return (0);
}
*/