/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 04:41:04 by mrami             #+#    #+#             */
/*   Updated: 2022/10/27 04:04:40 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*location;

	if (!s2)
	{
		return ((char *)s1);
	}
	len_s1 = (ft_strlen(s1) + 1);
	len_s2 = (ft_strlen(s2) + 1);
	location = malloc ((len_s1 + len_s2) + 1);
	if (!location)
	{
		return (0);
	}
	else
	{
		ft_strlcpy(location, s1, len_s1);
		ft_strlcpy(location + (len_s1 - 1), s2, len_s2);
	}
	return (location);
}
