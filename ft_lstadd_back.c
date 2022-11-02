/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:13:41 by mrami             #+#    #+#             */
/*   Updated: 2022/11/01 23:13:44 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = NULL;
	if (!lst || !new)
		return ;
	if (*lst && new)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	if (!(*lst))
		*lst = new;
}
