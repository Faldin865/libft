/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 01:48:36 by gpaul             #+#    #+#             */
/*   Updated: 2020/09/03 02:19:37 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*de;
	char	*str;
	char	temp;
	size_t	i;
	size_t	x;

	x = 0;
	i = 0;
	de = (char*)dest;
	str = (char*)src;
	while (i < n)
	{
		temp = str[i];
		de[i] = temp;
		i++;
	}
	return ((void*)de);

}
