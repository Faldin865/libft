/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 15:50:53 by gpaul             #+#    #+#             */
/*   Updated: 2020/08/26 20:25:36 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int		main(void)
{

	printf("%s\n", strnstr("1234yo5", "yo", 7));
	printf("%s\n", ft_strnstr("1234yo5", "yo", 7));
	return (0);
}