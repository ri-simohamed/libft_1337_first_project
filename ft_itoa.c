/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:32:29 by mrami             #+#    #+#             */
/*   Updated: 2022/10/29 18:20:20 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_cont_num(int num)
{
	int	count;

	count = 0;
	if (num == 0)
	{
		return (0);
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
	dst = (char *)malloc((len + 1) * sizeof(char));
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

int main ()
{
	long int n = 21474836427;
	printf("%s", ft_itoa(n));
}