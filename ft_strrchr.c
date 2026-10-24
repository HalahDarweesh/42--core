/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadarwis <hadarwis@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:04:01 by hadarwis          #+#    #+#             */
/*   Updated: 2026/10/23 17:20:23 by hadarwis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char) c)
			last = (char *) s;
		s++;
	}
	if (*s == (char) c)
		return ((char *) s);
	return (last);
}

/*int	main(void)
{
char	*s;
char	*result;

s = "hello";
result = ft_strrchr(s, '\0');
if (result)
printf("%s\n", result);
else
printf("Not found\n");
return (0);
}*/
