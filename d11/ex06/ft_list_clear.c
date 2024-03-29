/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 16:14:37 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/13 20:28:25 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *list;
	t_list *tmp;

	list = *begin_list;
	if (list == NULL)
		return ;
	while (list)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
	*begin_list = NULL;
}
