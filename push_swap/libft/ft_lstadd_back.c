/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:27:35 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 22:07:07 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast(*lst);
	aux->next = new;
}
/*
int	main(void)
{
	t_list	*list = NULL;
	t_list	*node1 = ft_lstnew("hola");
	t_list	*node2 = ft_lstnew("adios");

	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);

	printf("1st node content: %s\n", (char *)list->content);
	printf("2nd node content: %s\n", (char *)list->next->content);

	// Liberar memoria
	free(node1);
	free(node2);
	return (0);
}
*/