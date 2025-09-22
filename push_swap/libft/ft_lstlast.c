/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:12:33 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/15 12:13:29 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*
int	main(void)
{
	t_list	*list;
	t_list	*node1 = ft_lstnew(strdup("primero"));
	t_list	*node2 = ft_lstnew(strdup("segundo"));
	t_list	*node3 = ft_lstnew(strdup("último"));
	t_list	*last;

	list = node1;
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);

	last = ft_lstlast(list);
	if (last)
		printf("ft_lstlast: %s\n", (char *)last->content);

	// Liberar memoria
	free(node1->content);
	free(node2->content);
	free(node3->content);
	free(node1);
	free(node2);
	free(node3);

	return (0);
}
*/