/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:24:10 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 23:55:27 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1);
	if (j > 0)
		j--;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	s = malloc(j - i + 2);
	if (!s)
		return (NULL);
	k = 0;
	while (i <= j)
		s[k++] = s1[i++];
	s[k] = '\0';
	return (s);
}

/*
int	main(void)
{
	char	*result;

	result = ft_strtrim(" 42 school ", " ");
	printf("ft_strtrim: '%s'\n", result);
	free(result);

	result = ft_strtrim("xx42x", "x");
	printf("ft_strtrim: '%s'\n", result);
	free(result);

	result = ft_strtrim("abcabcabc", "abc");
	printf("ft_strtrim: '%s'\n", result);
	free(result);

	result = ft_strtrim("no-trim", "");
	printf("ft_strtrim: '%s'\n", result);
	free(result);

	result = ft_strtrim("", "abc");
	printf("ft_strtrim: '%s'\n", result);
	free(result);

	return (0);
}
*/