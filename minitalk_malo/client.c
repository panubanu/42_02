/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:59:38 by abanuelo          #+#    #+#             */
/*   Updated: 2025/09/16 12:18:12 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

int	ft_atoi(const char *str)
{
	long	result;
	int		i;
	int		sign;

	sign = 1;
	i = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return ((int)(sign * result));
}

void	send_signal(pid_t pid, char *bits)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (bits[i] == '0')
		{
			if (kill(pid, SIGUSR2) == -1)
				exit(EXIT_FAILURE);
		}
		else
		{
			if (kill(pid, SIGUSR1) == -1)
				exit(EXIT_FAILURE);
		}
		usleep(100);
		i++;
	}
}

void	dec_to_bit(pid_t pid, char c)
{
	int		i;
	int		div;
	char	bits[9];

	i = 0;
	div = 128;
	while (i < 8)
	{
		bits[i] = (c / div) % 2 + '0';
		div = div / 2;
		i++;
	}
	bits[i] = '\0';
	send_signal(pid, bits);
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	int		i;

	if (argc != 3)
		return (1);
	i = 0;
	pid = ft_atoi(argv[1]);
	if (pid <= 0)
		exit(EXIT_FAILURE);
	while (argv[2][i])
	{
		dec_to_bit(pid, argv[2][i]);
		i++;
	}
	dec_to_bit(pid, '\n');
}
