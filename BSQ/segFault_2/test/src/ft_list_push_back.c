/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaylord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 11:05:04 by egaylord          #+#    #+#             */
/*   Updated: 2019/08/19 22:15:54 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_list_push_back(t_list **begin_list, char data)
{
	t_list *tmp;

	tmp = *begin_list;
	if (*begin_list == 0)
		*begin_list = ft_create_elem(data);
	else
	{
		while (tmp->next != 0)
			tmp = tmp->next;
		tmp->next = ft_create_elem(data);
	}
}
