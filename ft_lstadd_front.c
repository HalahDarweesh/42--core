/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadarwis <hadarwis@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 16:28:38 by hadarwis          #+#    #+#             */
/*   Updated: 2026/10/27 16:28:38 by hadarwis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{
	int		a;
	int		b;
	t_list	*head;
	t_list	*node;

	a = 10;
	b = 20;
	head = ft_lstnew(&a);
	node = ft_lstnew(&b);
	ft_lstadd_front(&head, node);
	printf("%d\n", *(int *)head->content);
	printf("%d\n", *(int *)head->next->content);
	return (0);
}*/
