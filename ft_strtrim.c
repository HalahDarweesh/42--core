/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadarwis <hadarwis@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 14:24:54 by hadarwis          #+#    #+#             */
/*   Updated: 2026/10/24 14:25:23 by hadarwis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_is_in_set(s1[start], set))
		start++;
	while (end > start && ft_is_in_set(s1[end - 1], set))
		end--;
	trimmed = malloc(end - start + 1);
	if (!trimmed)
		return (NULL);
	i = 0;
	while (start < end)
		trimmed[i++] = s1[start++];
	trimmed[i] = '\0';
	return (trimmed);
}

/*int	main(void)
{
	char	*result;

	result = ft_strtrim("xxHello Worldxx", "x");
	printf("Test 1: [%s]\n", result);
	free(result);
	result = ft_strtrim("  Hello  ", " ");
	printf("Test 2: [%s]\n", result);
	free(result);
	result = ft_strtrim("xxxxx", "x");
	printf("Test 3: [%s]\n", result);
	free(result);
	result = ft_strtrim("Hello", "x");
	printf("Test 4: [%s]\n", result);
	free(result);
	result = ft_strtrim("", "x");
	printf("Test 5: [%s]\n", result);
	free(result);
	return (0);
}*/