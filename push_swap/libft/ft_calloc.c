/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:46:53 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/17 00:06:45 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
/*
int	main(void)
{
	int	*ptr1 = ft_calloc(5, sizeof(int));
	int	*ptr2 = calloc(5, sizeof(int));

	printf("ft_calloc: 
	[%d, %d, %d, %d, %d]\n", ptr1[0], ptr1[1], ptr1[2], ptr1[3], ptr1[4]);
	printf("calloc   : 
	[%d, %d, %d, %d, %d]\n", ptr2[0], ptr2[1], ptr2[2], ptr2[3], ptr2[4]);

	free(ptr1);
	free(ptr2);
	return (0);
}
*/