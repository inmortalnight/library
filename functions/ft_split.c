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

//crear malloc con el numero de coincidencias c + 1
//encontrar el c
//contar cuantas letras son hasta el c
//guardar posicion de c, actualizar a encontrar el nuevo c
//repetir
//crear segundo malloc con el tamaño len de cada repeticion
//salida por error malloc si falla

#include "libft.h"

static int count_char(const char *s, char c)
{
	int count = 0;
	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int	i;
	int start;
	int	end;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (count_char(s, c) + 1));
	if (!str)
		return (NULL);
	i = 0;
	start = -1;
	end = 0;
	while (s[end])
	{
		if (s[end] == c && end > start)
		{
			str[i] = (char *)malloc(sizeof(char) * (end - (start + 1)));
			if (!str)
				return (NULL); //deberia ser doble liberacion
			str[i] = ft_substr(s, start, end - start);
			i++;
			start = end + 1;
		}
		end++;
	}
	if (end > start)
	{
		str[i] = ft_substr(s, start, end - start);
		if (!str[i])
			return (NULL);
		i++;
	}
	str[i] = NULL;
	return (str);
}