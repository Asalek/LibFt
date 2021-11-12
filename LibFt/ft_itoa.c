/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:07:08 by asalek            #+#    #+#             */
/*   Updated: 2021/11/09 13:07:10 by asalek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbr_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*ptr;

	i = nbr_len(n);
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ptr[i--] = '\0';
	if (n == 0)
		ptr[i] = '0';
	if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		ptr[i] = '0' + (n % 10);
		n = n / 10;
		i--;
	}
	return (ptr);
}
