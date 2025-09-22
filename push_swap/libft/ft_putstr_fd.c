/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:59:37 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 23:16:44 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
}

/*
int	main(void)
{
	ft_putstr_fd("Hola", 1);
	ft_putstr_fd(" mundo", 1);
	ft_putstr_fd("\n", 1);

	ft_putstr_fd("", 1);
	ft_putstr_fd(NULL, 1);

	return (0);
}
*/