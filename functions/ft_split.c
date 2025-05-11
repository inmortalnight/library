/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhu <yizhu@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:47:43 by yizhu             #+#    #+#             */
/*   Updated: 2025/04/18 12:48:13 by yizhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_char(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static char	**ft_free(char **split, size_t num_subs)
{
	if (!split)
		return (NULL);
	while (num_subs > 0)
		free(split[--num_subs]);
	free(split);
	return (NULL);
}

static int	fill_result(char const *s, char c, char **res)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			res[j] = ft_substr(s, start, i - start);
			if (!res[j++])
				return (ft_free(res, j - 1), 0);
		}
	}
	res[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (count_char(s, c) + 1));
	if (!str)
		return (NULL);
	if (!fill_result(s, c, str))
		return (NULL);
	return (str);
}
