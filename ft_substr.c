/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 01:41:51 by gpaul             #+#    #+#             */
/*   Updated: 2020/09/02 01:45:49 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*re;
	size_t i;

	str = (char*)s;
	i = 0;

	if (!(re = malloc(sizeof(char) * len)))
		return (NULL);
	while (i < len && str[start])
	{
		re[i] = str[start];
		start++;
		i++;
	}
	re[i] = '\0';
	return (re);
}