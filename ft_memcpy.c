/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:37:44 by mrami             #+#    #+#             */
/*   Updated: 2022/11/16 21:28:46 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*str1;
	char		*str2;
	size_t		i;

	str1 = src;
	str2 = dst;
	i = 0;
	if (str1 == str2)
		return (dst);
	while (i < n)
	{
		str2[i] = str1[i];
		i++;
	}
	return (dst);
}
