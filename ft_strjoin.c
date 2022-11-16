/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 04:41:04 by mrami             #+#    #+#             */
/*   Updated: 2022/11/16 21:45:40 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*location;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	location = malloc ((len_s1 + len_s2) + 1);
	if (!location)
		return (0);
	else
	{
		ft_strlcpy(location, s1, len_s1 += 1);
		ft_strlcpy(location + (len_s1 - 1), s2, len_s2 + 1);
	}
	return (location);
}
