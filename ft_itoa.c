/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:32:29 by mrami             #+#    #+#             */
/*   Updated: 2022/10/29 19:28:36 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_cont_num(int num)
{
	int	count;

	count = 0;
	if (num == 0)
	{
		return (1);
	}
	if (num < 0)
	{
		count = count + 1;
	}
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*dst;
	int			len;
	long int	tmp;

	tmp = n;
	len = ft_cont_num(n);
	dst = malloc((len + 1));
	if (!dst)
		return (NULL);
	dst[len] = '\0';
	if (tmp < 0)
	{
		dst[0] = '-';
		tmp = tmp * (-1);
	}
	while (len > (n < 0))
	{
		dst[len - 1] = tmp % 10 + '0';
		tmp = tmp / 10;
		len--;
	}
	return (dst);
}
