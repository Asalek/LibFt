/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:22:17 by aourhzal          #+#    #+#             */
/*   Updated: 2021/11/02 18:27:45 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int ptr)
{
	if (ptr >= 'A' && ptr <= 'Z')
		ptr = ptr + 32;
	return (ptr);
}
