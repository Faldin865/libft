/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 19:55:56 by gpaul             #+#    #+#             */
/*   Updated: 2020/08/26 20:06:13 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	char		*str;
	int			size;

	size = 0;
	str = (char*)src;
	i = 0;
	while (dst[size - 1])
		size++;
	while (dstsize != 0 && i < (dstsize - size - 1) && str[i])
	{
		dst[size + i] = str[i];
		i++;
	}
	dst[size + i] = '\0';
	i = 0;
	while (str[i])
		i++;
	return (i);
}