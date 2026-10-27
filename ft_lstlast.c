/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadarwis <hadarwis@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 17:00:22 by hadarwis          #+#    #+#             */
/*   Updated: 2026/10/27 17:00:24 by hadarwis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*int	main(void)
{
	int		a;
	int		b;
	int		c;
	t_list	*head;
	t_list	*last;

	a = 10;
	b = 20;
	c = 30;
	head = ft_lstnew(&c);
	head->next = ft_lstnew(&a);
	head->next->next = ft_lstnew(&b);
	last = ft_lstlast(head);
	printf("Last content: %d\n", *(int *)last->content);
	free(last);
	free(head->next);
	free(head);
	return (0);
}*/
