/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:45:40 by mrami             #+#    #+#             */
/*   Updated: 2022/11/01 12:55:05 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*p;

	p = (t_list *)malloc (sizeof(t_list));
	if (!p)
		return (NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}

// int main ()
// {
// 	char 	ptr[] = "rami1902";
// 	t_list *x;
// 	x = ft_lstnew(ptr);
// 	printf("%s", x->content);
// }
