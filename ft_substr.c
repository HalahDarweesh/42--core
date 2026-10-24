/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadarwis <hadarwis@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 13:19:20 by hadarwis          #+#    #+#             */
/*   Updated: 2026/10/24 13:25:17 by hadarwis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	sub_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		sub_len = 0;
	else if (len < s_len - start)
		sub_len = len;
	else
		sub_len = s_len - start;
	substr = malloc(sub_len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < sub_len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*int main(void)
{
    char *result;
    result = ft_substr("HELLOWORLS", 5, 3);
    printf("%s" , result);
    free(result);
}*/