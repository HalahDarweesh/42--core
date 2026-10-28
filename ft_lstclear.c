/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadarwis <hadarwis@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 21:21:21 by hadarwis          #+#    #+#             */
/*   Updated: 2026/10/28 21:21:21 by hadarwis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == NULL)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

/*void	del(void *content)
{
	(void)content;
}

int	main(void)
{
	t_list	*a;
	t_list	*b;

	a = ft_lstnew("Hello");
	b = ft_lstnew("World");
	a->next = b;
	ft_lstclear(&a, del);
	printf("%p\n", (void *)a);
	return (0);
}*/
