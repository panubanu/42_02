/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possible_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 14:22:45 by abanuelo          #+#    #+#             */
/*   Updated: 2025/09/19 13:01:04 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_error(int *number_list)
{
	free(number_list);
	ft_printf("Error\n");
	exit (1);
}

void	check_space(char **argv, int *number_list)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (argv[i][j] == ' ' || (argv[i][j] <= 13 && argv[i][j] >= 9))
				print_error(number_list);
			j++;
		}
		i++;
		j = 0;
	}
}

void	no_int(char **argv, int *number_list)
{
	int	i;
	int	j;
	int	confirm;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (j == 0 && (argv[i][j] == '+' || argv[i][j] == '-'))
			{
				j++;
				if (argv[i][j] == '\0')
					print_error(number_list);
			}
			else if (j != 0 && (argv[i][j] == '+' || argv[i][j] == '-'))
				print_error(number_list);
			confirm = ft_isdigit((int)argv[i][j]);
			if (confirm == 0)
				print_error(number_list);
			j++;
		}
		i++;
	}
}

void	repited_number(int *number_list, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < (size - 1))
	{
		j = i + 1;
		while (j < size)
		{
			if (number_list[i] == number_list[j])
				print_error(number_list);
			j++;
		}
		i++;
	}
}

void	bigger_than_int(int *number_list)
{
	int	i;

	i = 0;
	while (i < argc )
	{
		if (number_list[i] > 2147483647 || number_list[i] < -2147483648)
			print_error(number_list);
		i++;
	}
}
