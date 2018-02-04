/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 18:14:57 by nmizin            #+#    #+#             */
/*   Updated: 2017/10/25 18:15:03 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		leng;
	char	*dest;

	leng = 0;
	while (src[leng])
		leng++;
	dest = (char*)malloc(sizeof(*src) * (leng + 1));
	leng = 0;
	while (src[leng])
	{
		dest[leng] = src[leng];
		leng++;
	}
	dest[leng] = '\0';
	return (dest);
}
