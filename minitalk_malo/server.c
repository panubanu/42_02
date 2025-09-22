/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:59:47 by abanuelo          #+#    #+#             */
/*   Updated: 2025/09/16 12:16:45 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include "printf/ft_printf.h"

void	bin_to_dec(char	*bits)
{
	int		i;
	int		value;
	char	c;

	i = 0;
	value = 0;
	while (i < 8)
	{
		value = value * 2 + (bits[i] - '0');
		i++;
	}
	c = (char)value;
	write(1, &c, 1);
}

void	handler(int sig)
{
	static char	bits[9];
	static int	i;

	if (sig == SIGUSR1)
		bits[i] = '1';
	else
		bits[i] = '0';
	i++;
	if (i == 8)
	{
		bits[i] = '\0';
		bin_to_dec(bits);
		i = 0;
	}
}

int	main(void)
{
	pid_t	pid;

	pid = getpid();
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	ft_printf("Server PID: %d\n", pid);
	while (1)
	{
		pause();
	}
}
