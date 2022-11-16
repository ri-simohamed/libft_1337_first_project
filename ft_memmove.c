/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:41:09 by mrami             #+#    #+#             */
/*   Updated: 2022/11/16 21:35:54 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const char	*str;
	char		*dest;

	dest = dst;
	str = src;
	if (dest <= str)
		ft_memcpy(dest, src, n);
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
