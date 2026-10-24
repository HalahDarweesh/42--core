/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadarwis <hadarwis@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:02:45 by hadarwis          #+#    #+#             */
/*   Updated: 2026/10/23 17:20:52 by hadarwis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*source;

	i = 0;
	dest = (unsigned char *) dst;
	source = (unsigned char *) src;
	if (!src && !dst)
		return (NULL);
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
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
