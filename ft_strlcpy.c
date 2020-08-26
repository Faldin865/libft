/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 19:17:33 by gpaul             #+#    #+#             */
/*   Updated: 2020/08/26 19:56:44 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
	size_t		i;
	char		*str;

	str = (char*)src;
	i = 0;

	while (dstsize != 0 && i < dstsize - 1 && str[i])
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	i = 0;
	while (str[i])
		i++;
	return (i);
}