/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 01:41:51 by gpaul             #+#    #+#             */
/*   Updated: 2021/01/06 15:26:43 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*re;
	size_t	i;

	str = (char*)s;
	i = 0;
	if (!(re = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
	{
		re[0] = '\0';
		return (re);
	}
	while (i < len && str[start])
	{
		re[i] = str[start];
		start++;
		i++;
	}
	re[i] = '\0';
	return (re);
}
