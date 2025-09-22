/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:16:27 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/17 00:09:07 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countstr(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
	}
	return (j);
}

void	ft_fill_subs(char const *s, char c, size_t j, char **subs)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			subs[k++] = ft_substr(s, j, i - j);
	}
	subs[k] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**subs;
	size_t	j;

	if (!s)
		return (NULL);
	j = 0;
	j = ft_countstr(s, c);
	subs = malloc((j + 1) * sizeof(char *));
	if (!subs)
		return (NULL);
	ft_fill_subs(s, c, j, subs);
	return (subs);
}
/*
int	main(void)
{
	char	**result;
	int		i = 0;

	char *input = "      split       this for   me  !       ";
	char separator = ' ';

	result = ft_split(input, separator);
	if (!result)
	{
		printf("ft_split returned NULL\n");
		return (1);
	}

	while (result[i])
	{
		printf("[%s]\n", result[i]);
		i++;
	}

	if (result[i] == NULL)
		printf("[NULL]\n");

	return (0);
}
*/