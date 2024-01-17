/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    sort_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:16:56 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/17 12:24:34 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int	swap;
	t_list	*tmp;

	tmp = lst;
	while(lst->next != '\0')
	{
		if((*cmp)(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}
