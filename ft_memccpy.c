/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 03:09:39 by gpaul             #+#    #+#             */
/*   Updated: 2020/09/03 03:23:56 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*dst;
	char	*str;
	int		x;

	x = 0;
	dst = (char*)dest;
	str = (char*)src;
	i = 0;
	while (i < n && x == 0)
	{
		if (str[i] == c)
			x = i + 1;
		dst[i] = str[i];
		i++;
	}
	if (x == 0)
		return (NULL);
	else
		return ((void*)dst + x);
}
