/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:19:18 by hlevi             #+#    #+#             */
/*   Updated: 2021/08/02 16:21:28 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*tmp;

	i = 0;
	if (!src && !dst)
		return (0);
	tmp = (char *)src;
	while (src[i] && i < dstsize - 1 && dstsize > 0)
	{
		dst[i] = tmp[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (ft_strlen((char *)src));
}
