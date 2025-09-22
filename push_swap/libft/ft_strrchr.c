/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:01:55 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/17 00:05:13 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			j = i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	else if (j != -1)
		return ((char *)&s[j]);
	return (NULL);
}

/*
int	main(void)
{
	char *s = "Hola mundo";

	printf("ft_strrchr: %s    strrchr: %s\n", ft_strrchr(s, 'o'), 
	strrchr(s, 'o'));
	printf("ft_strrchr: %s    strrchr: %s\n", ft_strrchr(s, 'a'), 
	strrchr(s, 'a'));
	printf("ft_strrchr: %s    strrchr: %s\n", ft_strrchr(s, 'x'), 
	strrchr(s, 'x'));
	printf("ft_strrchr: %s    strrchr: %s\n", ft_strrchr(s, '\0'), 
	strrchr(s, '\0'));

	return (0);
}
*/