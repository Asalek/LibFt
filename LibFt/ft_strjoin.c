/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:17:54 by asalek            #+#    #+#             */
/*   Updated: 2021/11/05 10:18:59 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		len1;
	int		len2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = malloc(((len1 + len2) + 1) * sizeof(char));
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';
	return (s3);
}
/*
int    main()
{
    char    s1[6] = "AYOUB";
    char    s2[6] = "SALEK";
    char    *s3;
    int    i;

    i = 0;
    s3 = ft_strjoin(s1,s2);
    while (s3[i])
    {
        printf("%c",s3[i]);
        i++;
    }
           
    return (0);
}*/
