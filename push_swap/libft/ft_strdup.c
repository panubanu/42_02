/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:21:04 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 23:33:18 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	i;
	size_t	j;

	j = ft_strlen(s);
	d = malloc(j + 1);
	if (!d)
		return (NULL);
	i = 0;
	while ((s[i] != '\0'))
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

/*
int	main(void)
{
	char *s = "Hola 42";
	char *copy1 = ft_strdup(s);
	char *copy2 = strdup(s);

	printf("ft_strdup: %s\n", copy1);
	printf("strdup   : %s\n", copy2);

	free(copy1);
	free(copy2);
	return (0);
}
*/