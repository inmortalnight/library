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
	size_t	l_dst;
	size_t	l_src;
	size_t	count;

	l_dst = ft_strlen(dst);
	l_src = ft_strlen(src);
	if (size <= l_dst)
		return (l_src + size);
	count = l_dst;
	while (*src && count < (size - 1))
	{
		dst[count] = *src++;
		count++;
	}
	dst[count] = '\0';
	return (l_dst + l_src);
}
