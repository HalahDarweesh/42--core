/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadarwis <hadarwis@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 13:35:03 by hadarwis          #+#    #+#             */
/*   Updated: 2026/10/24 14:00:16 by hadarwis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_copy(char *dest, char const *src, size_t *i)
{
	size_t	j;

	j = 0;
	while (src[j])
	{
		dest[*i] = src[j];
		(*i)++;
		j++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	joined = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joined)
		return (NULL);
	len = 0;
	ft_copy(joined, s1, &len);
	ft_copy(joined, s2, &len);
	joined[len] = '\0';
	return (joined);
}
/*int main(void)
{
    char *resul;
    resul =ft_strjoin("Hello", "World!");
    printf("%s", resul);
    return (0);
}*/