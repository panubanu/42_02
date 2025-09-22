/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:13:03 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 23:14:54 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*
int	main(void)
{
	ft_putendl_fd("Hola mundo", 1);
	ft_putendl_fd("Esta es otra línea", 1);
	ft_putendl_fd("", 1);
	ft_putendl_fd(NULL, 1); // no imprime nada

	return (0);
}
*/