/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:49:01 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 22:39:16 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*list;
	t_list	*node1 = ft_lstnew(strdup("hola"));
	t_list	*node2 = ft_lstnew(strdup("mundo"));

	list = node1;
	ft_lstadd_back(&list, node2);

	printf("Contenido de la lista:\n");
	ft_lstiter(list, print_content);

	// Liberamos memoria para evitar leaks
	free(node1->content);
	free(node2->content);
	free(node1);
	free(node2);

	return (0);
}
*/