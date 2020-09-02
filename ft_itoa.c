/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 22:42:20 by gpaul             #+#    #+#             */
/*   Updated: 2020/09/03 00:07:04 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_rev(char *re)
{
	int		i;
	int		n;
	char	temp;

	i = 0;
	n = ft_strlen(re);
	while (i < n)
	{
		n--;
		temp = re[i];
		re[i] = re[n];
		re[n] = temp;
		i++;
	}
	return (re);
}

char	*ft_itoa(int n)
{
	char	*re;
	int		i;
	int		signe;

	i = 0;
	signe = 0;
	
	if (!(re = malloc(sizeof(char) * 12)))
		return (0);
	if (n == -2147483648)
	{
		//re = "-2147483648\0";
		//re[11] = '\0';
		return ("-2147483648\0");
	}
	if (n == 0)
	{
		re[0] = '0';
		re[1] = '\0';
		return (re);
	}
	if (n < 0)
	{
		n = -n;
		signe = 1;
	}
	while (n > 0)
	{
		re[i] = ((n % 10) + '0');
		n = n / 10;
		i++;
	}
	if (signe == 1)
	{
		re[i] = '-';
		i++;
	}
	re[i] = '\0';
	ft_rev(re);
	return (re);
}

/*

int		main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
}

*/