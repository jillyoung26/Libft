/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 12:34:23 by jyoung            #+#    #+#             */
/*   Updated: 2019/05/22 15:55:18 by jyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_int_len(int n)
{
	if (n < 0)
		n = -n;
	if (n < 10)
		return (1);
	else
		return (ft_int_len(n / 10) + 1);
}

char			*ft_itoa(int a)
{
	char			*str;
	int				len;
	int				neg;
	unsigned int	n;

	if (a == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 0;
	if (a < 0)
		neg = 1;
	n = (a < 0) ? -a : a;
	len = neg ? ft_int_len(n) : ft_int_len(n) - 1;
	if ((str = ft_strnew(len + neg + 1)) == NULL)
		return (NULL);
	while (len >= 0)
	{
		str[len] = (n % 10) + '0';
		len--;
		n /= 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
