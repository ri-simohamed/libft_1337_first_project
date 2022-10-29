/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 04:54:16 by mrami             #+#    #+#             */
/*   Updated: 2022/10/27 04:35:01 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words(const char *s, char c)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != '\0' && s[i] != c)
			{
				i++;
			}
			if (s[i] == '\0')
				return (word);
		}
		i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	size_t	i;
	int		j;
	size_t	index;
	size_t	s_len;

	if (!s)
		return (NULL);
	dest = (char **)malloc((ft_words(s, c) + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	s_len = ft_strlen(s);
	while (i <= s_len)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		index = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (index <= i)
		{
			dest[j] = ft_substr(s, index, i - index);
			if (!dest[j])
			{
				while (j >= 0)
				{
					free(dest[j]);
					j--;
				}
				free(dest);
				return (0);
			}
			j++;
		}
		i++;
	}
	dest[j] = 0;
	return (dest);
}
