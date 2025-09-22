/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:03:25 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 22:45:29 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*content_new;
	t_list	*lst_new;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	lst_new = NULL;
	while (lst)
	{
		content_new = f(lst->content);
		node = ft_lstnew(content_new);
		if (!node)
		{
			ft_lstclear(&lst_new, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_new, node);
		lst = lst->next;
	}
	return (lst_new);
}

/*
void	*to_upper(void *content)
{
	char	*str = (char *)content;
	char	*new_str = strdup(str);
	int		i = 0;

	if (!new_str)
		return (NULL);
	while (new_str[i])
	{
		if (new_str[i] >= 'a' && new_str[i] <= 'z')
			new_str[i] -= 32;
		i++;
	}
	return (new_str);
}

void	del_function(void *content)
{
	free(content);
}


int	main(void)
{
	t_list	*original;
	t_list	*mapped;

	original = ft_lstnew(strdup("hola"));
	ft_lstadd_back(&original, ft_lstnew(strdup("que")));
	ft_lstadd_back(&original, ft_lstnew(strdup("tal")));

	mapped = ft_lstmap(original, to_upper, del_function);

	printf("Original:\n");
	printf("  %s\n", (char *)original->content);
	printf("  %s\n", (char *)original->next->content);
	printf("  %s\n", (char *)original->next->next->content);

	printf("Mapped:\n");
	printf("  %s\n", (char *)mapped->content);
	printf("  %s\n", (char *)mapped->next->content);
	printf("  %s\n", (char *)mapped->next->next->content);

	// Liberar ambas listas
	ft_lstclear(&original, del_function);
	ft_lstclear(&mapped, del_function);

	return (0);
}
*/