/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadarwis <hadarwis@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 16:02:13 by hadarwis          #+#    #+#             */
/*   Updated: 2026/10/27 16:02:29 by hadarwis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*int	main(void)
{
	int		number;
	t_list	*node;

	number = 42;
	node = ft_lstnew(&number);
	if (node == NULL)
		return (1);
	printf("Content: %d\n", *(int *)node->content);
	printf("Next: %p\n", (void *)node->next);
	free(node);
	return (0);
}*/
