/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhu <yizhu@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:45:58 by yizhu             #+#    #+#             */
/*   Updated: 2025/04/18 12:47:08 by yizhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[j]))
		j--;
	// quitar principio y final
	// guardar version final en malloc
	return (str);
}
