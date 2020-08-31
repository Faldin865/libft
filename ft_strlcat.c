/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 19:55:56 by gpaul             #+#    #+#             */
/*   Updated: 2020/08/31 17:26:30 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*str;
	size_t		size;


	size = 0;
	str = (char*)src;
	if (dstsize == 0 || dst == '\0')
		return ((ft_strlen(dst) + ft_strlen(str)));
	while (dst[size] && size < dstsize)
		size++;
	if (dst[size] != '\0')
		return ((ft_strlen(dst) + ft_strlen(str)));
	i = size;
	size = 0;
	while (i < dstsize - 1 && str[size])
	{
		dst[i] = str[size];
		size++;
		i++;
	}
	while (i < dstsize)
	{
		dst[i] = '\0';
		i++;
	}
	return ((ft_strlen(dst) + ft_strlen(str)));
}