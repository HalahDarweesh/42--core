/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadarwis <hadarwis@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:02:45 by hadarwis          #+#    #+#             */
/*   Updated: 2026/10/29 10:08:14 by hadarwis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
char	src[] = "helloooo";
char	dst[6];

ft_memcpy(dst, src, 5);
dst[6] = '\0';
printf("%s\n", dst);
return (0);
}*/
