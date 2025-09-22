/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:04:24 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 22:28:05 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
void	del_function(void *content)
{
	free(content);
}

int	main(void)
{
	char	*str1 = malloc(6);
	char	*str2 = malloc(6);
	t_list	*node;
	t_list	*node2;

	if (!str1 || !str2)
		return (1);

	str1[0] = 'n';
	str1[1] = 'o';
	str1[2] = 'd';
	str1[3] = 'e';
	str1[4] = '1';
	str1[5] = '\0';

	str2[0] = 'n';
	str2[1] = 'o';
	str2[2] = 'd';
	str2[3] = 'e';
	str2[4] = '2';
	str2[5] = '\0';

	node = ft_lstnew(str1);
	node2 = ft_lstnew(str2);
	ft_lstadd_back(&node, node2);

	printf("Antes de ft_lstdelone:\n");
	printf("  1st: %s\n", (char *)node->content);
	printf("  2nd: %s\n", (char *)node->next->content);

	ft_lstdelone(node, del_function);

	// ¡No accedemos a node->content aquí porque ha sido liberado!
	printf("Después de ft_lstdelone: primer nodo liberado, queda el segundo:\n");
	printf("  2nd: %s\n", (char *)node2->content);

	free(node2); // liberar el segundo nodo manualmente
	return (0);
}
*/