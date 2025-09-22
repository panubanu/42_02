/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:07:34 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 22:55:57 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	t_list	*list = NULL;

	list = ft_lstnew(strdup("uno"));
	ft_lstadd_back(&list, ft_lstnew(strdup("dos")));
	ft_lstadd_back(&list, ft_lstnew(strdup("tres")));

	printf("ft_lstsize: %d\n", ft_lstsize(list));

	// Liberar la lista
	ft_lstclear(&list, free);
	return (0);
}
*/