/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:19:07 by mrami             #+#    #+#             */
/*   Updated: 2022/10/26 05:39:03 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = s;
	while (n > 0)
	{
		if (*str++ == c)
		{
			return ((void *)(str - 1));
		}
		n--;
	}
	return (0);
}

// int main () {
// 	const char str[] = "mohamed rami student at 1337.";
// 	const char ch = 'd';
// 	char *ret;

// 	ret = ft_memchr(str, ch, 60);

// 	printf("%s\n", ret);

// 	return(0);
// }
