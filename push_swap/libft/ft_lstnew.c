/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:57:58 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/16 22:53:29 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
int	main(void)
{
	char	*texto = strdup("nuevo nodo");
	t_list	*nodo = ft_lstnew(texto);

	if (!nodo)
	{
		printf("Error al crear el nodo\n");
		return (1);
	}

	printf("ft_lstnew:\n");
	printf("  content: %s\n", (char *)nodo->content);
	printf("  next: %p\n", (void *)nodo->next);

	// Liberar memoria
	free(nodo->content);
	free(nodo);
	return (0);
}
*/