/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:09:49 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 22:18:37 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = aux;
	}
}

/*
void	del_function(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*list;
	char	*str1 = malloc(5);
	char	*str2 = malloc(6);

	if (!str1 || !str2)
		return (1);

	str1[0] = 'h';
	str1[1] = 'o';
	str1[2] = 'l';
	str1[3] = 'a';
	str1[4] = '\0';

	str2[0] = 'a';
	str2[1] = 'd';
	str2[2] = 'i';
	str2[3] = 'o';
	str2[4] = 's';
	str2[5] = '\0';

	list = ft_lstnew(str1);
	ft_lstadd_back(&list, ft_lstnew(str2));

	printf("Antes de clear:\n");
	printf("1st: %s\n", (char *)list->content);
	printf("2nd: %s\n", (char *)list->next->content);

	ft_lstclear(&list, del_function);

	if (list == NULL)
		printf("Después de ft_lstclear: lista vacía\n");

	return (0);
}
*/