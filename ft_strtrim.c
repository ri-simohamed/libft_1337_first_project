/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:21:26 by mrami             #+#    #+#             */
/*   Updated: 2022/10/29 18:04:06 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_checkset(char str, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (str == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	char	*trim;
	char	*str;
	char	*start;

	len = ft_strlen(s1);
	str = (char *)s1;
	start = (char *)set;
	i = 0;
	while (s1[i] && ft_checkset(str[i], start))
		i++;
	if (len == i)
		return (ft_strdup(""));
	while (s1[i] && ft_checkset(str[len - 1], start))
		len--;
	trim = malloc((len - i) + 1);
	if (!trim)
		return (0);
	ft_strlcpy(trim, &str[i], (len - i) + 1);
	return (trim);
}
