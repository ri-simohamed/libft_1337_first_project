/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:41:09 by mrami             #+#    #+#             */
/*   Updated: 2022/11/02 18:24:47 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*str;

	dest = (char *)dst;
	str = (char *)src;
	if (dest <= str)
	{
		return (ft_memcpy(dst, src, n));
	}
	else if (dest > str)
	{
		while (n > 0)
		{
			dest[n - 1] = str[n - 1];
			n--;
		}
	}
	return (dst);
}
// 1 2 3 4 5 6 7 8 9

