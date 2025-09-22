/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 18:05:41 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 23:29:18 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/*
int	main(void)
{
	char *s = "Hola mundo";

	printf("ft_strchr: %s    strchr: %s\n", ft_strchr(s, 'm'), strchr(s, 'm'));
	printf("ft_strchr: %s    strchr: %s\n", ft_strchr(s, 'o'), strchr(s, 'o'));
	printf("ft_strchr: %s    strchr: %s\n", ft_strchr(s, 'z'), strchr(s, 'z'));
	printf("ft_strchr: %s    strchr: %s\n", ft_strchr(s, '\0'), strchr(s, '\0'));

	return (0);
}
*/