/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadarwis <hadarwis@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:48:27 by hadarwis          #+#    #+#             */
/*   Updated: 2026/10/25 15:48:27 by hadarwis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*static void	ft_change(unsigned int i, char *c)
{
	if (i == 2)
		*c = *c - 32;
}

int	main(void)
{
	char	str[] = "hello";

	ft_striteri(str, ft_change);
	printf("%s\n", str);
	return (0);
}*/
