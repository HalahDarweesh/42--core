/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadarwis <hadarwis@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 16:42:26 by hadarwis          #+#    #+#             */
/*   Updated: 2026/10/29 10:18:06 by hadarwis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lstsize(t_list *lst)
{
	unsigned int	count;
	t_list			*current;

	count = 0;
	current = lst;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}

/*int	main(void)
{
	int		a;
	int		b;
	int		c;
	t_list	*head;
	t_list	*node2;
	t_list	*node3;

	a = 10;
	b = 20;
	c = 30;
	head = ft_lstnew(&a);
	node2 = ft_lstnew(&b);
	node3 = ft_lstnew(&c);
	head->next = node2;
node2->next = node3;
node3->next = NULL;
	printf("List size: %u\n", ft_lstsize(head));
	free(node3);
	free(node2);
	free(head);
	return (0);
}*/
