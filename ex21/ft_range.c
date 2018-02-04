/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 13:06:38 by nmizin            #+#    #+#             */
/*   Updated: 2017/10/26 13:06:42 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int leng;
	int *destint;
	int diff;

	if (min >= max)
		return (0);
	diff = max - min;
	destint = (int *)malloc(sizeof(int) * (diff));
	leng = 0;
	while (min < max)
	{
		destint[leng] = min;
		leng++;
		min++;
	}
	destint[leng] = 0;
	return (destint);
}
