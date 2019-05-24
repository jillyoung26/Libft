/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 12:08:50 by jyoung            #+#    #+#             */
/*   Updated: 2019/05/21 17:16:22 by jyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*buff;
	size_t	i;

	buff = ((char *)malloc(sizeof(*buff) * size + 1));
	if (buff == NULL)
		return (NULL);
	i = 0;
	ft_memset(buff, '\0', size + 1);
	return (buff);
}
