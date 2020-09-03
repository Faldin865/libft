/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 22:42:20 by gpaul             #+#    #+#             */
/*   Updated: 2020/09/03 02:50:43 by gpaul            ###   ########.fr       */
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

char	*ft_zero(char *re)
{
	re[0] = '0';
	re[1] = '\0';
	return (re);
}

char	*ft_itoa(int n)
{
	char	*re;
	int		i;
	int		signe;
	long	nb;

	nb = n;
	i = 0;
	signe = 0;
	if (!(re = malloc(sizeof(char) * 12)))
		return (0);
	if (nb == 0)
		return (ft_zero(re));
	nb < 0 ? signe = 1 : 0;
	signe == 1 ? nb = -nb : 0;
	while (nb > 0)
	{
		re[i] = ((nb % 10) + '0');
		nb = nb / 10;
		i++;
	}
	if (signe == 1)
		re[i++] = '-';
	re[i] = '\0';
	ft_rev(re);
	return (re);
}
