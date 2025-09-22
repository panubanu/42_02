/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:46:09 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 23:57:53 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (size_t)ft_strlen(s + start))
		len = ft_strlen(s + start);
	subs = malloc(len + 1);
	if (!subs)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}

/*
int	main(void)
{
	char	*res;

	res = ft_substr("libft es divertida", 6, 2);
	printf("ft_substr: '%s'\n", res);
	free(res);

	res = ft_substr("libft", 0, 10);
	printf("ft_substr: '%s'\n", res);
	free(res);

	res = ft_substr("libft", 10, 3);
	printf("ft_substr: '%s'\n", res);
	free(res);

	res = ft_substr("42", 1, 1);
	printf("ft_substr: '%s'\n", res);
	free(res);

	res = ft_substr("", 0, 1);
	printf("ft_substr: '%s'\n", res);
	free(res);

	return (0);
}
*/