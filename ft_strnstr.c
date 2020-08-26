/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 20:08:27 by gpaul             #+#    #+#             */
/*   Updated: 2020/08/26 20:30:14 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	char		*str;
	char		*to_find;
	int			n;

	n = 0;
	i = 0;
	str = (char*)haystack;
	to_find = (char*)needle;
	if (to_find == '\0')
		return(str);
	while (i < len && str[i])
	{
		while (to_find[n] == str[i])
		{
			n++;
			i++;
		}
		if (to_find[n] == '\0')
			return (&str[i - n]);
		i = i - n;
		n = 0;
		i++;
	}
	return (NULL);
}