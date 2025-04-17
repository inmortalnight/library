/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhu <yizhu@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:12:31 by yizhu             #+#    #+#             */
/*   Updated: 2025/04/15 14:27:54 by yizhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}
