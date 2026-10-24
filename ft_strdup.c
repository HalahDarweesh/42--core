/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadarwis <hadarwis@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:03:08 by hadarwis          #+#    #+#             */
/*   Updated: 2026/10/23 17:20:39 by hadarwis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(s);
	copy = malloc(len + 1);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s, len + 1);
	return (copy);
}

/*int	main(void)
{
char	*copy;

copy = ft_strdup("Hello");
if (!copy)
return (1);
printf("%s\n", copy);
free(copy);
return (0);
}*/
