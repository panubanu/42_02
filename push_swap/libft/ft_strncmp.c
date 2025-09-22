/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:23:30 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/17 00:06:31 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] - s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	printf("ft_strncmp: %d 
	   strncmp: %d\n", ft_strncmp("abc", "abc", 3), strncmp("abc", "abc", 3));
	printf("ft_strncmp: %d   
	 strncmp: %d\n", ft_strncmp("abc", "abd", 3), strncmp("abc", "abd", 3));
	printf("ft_strncmp: %d 
	strncmp: %d\n", ft_strncmp("abc", "abcd", 3), strncmp("abc", "abcd", 3));
	printf("ft_strncmp: %d  
	 strncmp: %d\n", ft_strncmp("abc", "abc", 0), strncmp("abc", "abc", 0));
	printf("ft_strncmp: %d   
	 strncmp: %d\n", ft_strncmp("abc", "", 1), strncmp("abc", "", 1));
	return (0);
}
*/