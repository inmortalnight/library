/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhu <yizhu@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:23:35 by yizhu             #+#    #+#             */
/*   Updated: 2025/04/15 14:27:19 by yizhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	i = ft_strlen(dst);
    if (size <= i)
		return (i + size);
	if (size > 0)
	{
		while (src[j] && (i + j) < size - 1)
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	return (ft_strlen(dst) + ft_strlen(src));
}
