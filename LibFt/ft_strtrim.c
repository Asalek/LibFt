/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek   <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:16:20 by asalek            #+#    #+#             */
/*   Updated: 2021/11/11 22:17:42 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	to_find (char c, char *set)
{
	int	i;

	i = 0;
	while (set[i]) 
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	i = 0;
	j = 0;
	len = ft_strlen ((char *)s1);
	char *str1;
	char *nset = (char *)set;
	int nlen = len;
	while (to_find (s1[i], nset) == 1)
		   i++;
	while (to_find (s1[len - 1], nset) == 1)
		   len--;
	str1 = (char *)malloc(sizeof(char) * ft_strlen (s1) - i -nlen + len + 1);
	if (!s1)
	{
		return (NULL);
	}
	while (s1[i] && i < len)
	{
		   str1[j] = s1[i];
		   i++;
		   j++;
	}
	return (str1);
}
