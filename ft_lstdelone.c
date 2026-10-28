/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadarwis <hadarwis@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 20:59:25 by hadarwis          #+#    #+#             */
/*   Updated: 2026/10/28 20:59:27 by hadarwis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/*void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node;
	char	*text;

	text = malloc(6 * sizeof(char));
	if (text == NULL)
		return (1);
	strcpy(text, "Hello");
	node = ft_lstnew(text);
	if (node == NULL)
	{
		free(text);
		return (1);
	}
	printf("Before: %s\n", (char *)node->content);
	ft_lstdelone(node, del_content);
	printf("Node and content freed successfully.\n");
	return (0);
}*/