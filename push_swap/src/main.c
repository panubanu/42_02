/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 11:21:32 by abanuelo          #+#    #+#             */
/*   Updated: 2025/09/19 13:00:37 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_error(int argc, char **argv)
{
	int	i;
	int	j;
	int	confirm;
	int	*number_list;

	i = 1;
	j = 0;
	number_list = malloc(sizeof(int) * (argc - 1));
	if (!number_list)
		exit(1);
	check_space(argv, number_list);
	no_int(argv, number_list);
	while (argv[i])
	{
		number_list[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	repited_number(number_list, (argc - 1));
	bigger_than_int(number_list, argc);
	free(number_list);
}

int	main(int argc, char **argv)
{
	int	*number_list;

	if (argc == 1)
		return (0);
	check_error(argc, argv);
	return (0);
}
