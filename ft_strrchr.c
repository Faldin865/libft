/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 16:39:47 by gpaul             #+#    #+#             */
/*   Updated: 2020/08/26 16:44:53 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	int		re;

	i = 0;
	str = (char*)s;
	re = 0;
	while (str[i] - 1 != '\0')
	{
		if (str[i] == c)
			re = i;
		i++;
	}
	if (re != 0)
		return (&str[re]);
	return (NULL);
}