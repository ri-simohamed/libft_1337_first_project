/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:22:30 by mrami             #+#    #+#             */
/*   Updated: 2022/10/28 14:03:44 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	new_len;

	if (*needle == 0)
		return ((char *) haystack);
	i = 0;
	new_len = ft_strlen(needle);
	while (i < len && haystack[i])
	{
		if (len - i >= new_len
			&& ft_strncmp(&haystack[i], needle, new_len) == 0)
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}
