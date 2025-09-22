/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:20:55 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 22:10:11 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
int	main(void)
{
	t_list	*list = NULL;
	t_list	*node1 = ft_lstnew("segundo");
	t_list	*node2 = ft_lstnew("primero");

	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);

	printf("1st node content: %s\n", (char *)list->content);
	printf("2nd node content: %s\n", (char *)list->next->content);

	free(node1);
	free(node2);
	return (0);
}
*/