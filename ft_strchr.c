/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadarwis <hadarwis@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:03:02 by hadarwis          #+#    #+#             */
/*   Updated: 2026/10/23 17:20:44 by hadarwis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	if (*s == (char) c)
		return ((char *) s);
	return (NULL);
}

/*int	main(void)
{
char	*s;
//char	*result;

s = "hello";
//result = ft_strchr(s, 'f');
//printf("%s\n", result);
if (ft_strchr(s, NULL))
printf("Found\n");
else
printf("Not found\n");
return (0);
}*/
