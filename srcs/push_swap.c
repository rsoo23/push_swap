/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:03:25 by rsoo              #+#    #+#             */
/*   Updated: 2023/05/11 11:03:25 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_swap(int size_a, t_dlist **stk_a, t_dlist **stk_b)
{
	t_info	*info;

	info = malloc(sizeof(t_info));
	init_info(info, size_a);
	if (is_stk_sorted(*stk_a))
	{
		free(info);
		return ;
	}
	else if (size_a == 2)
		swap('a', stk_a, stk_b);
	else if (size_a == 3)
		sort_small(stk_a, stk_b);
	else if (size_a <= 20)
		sort_medium(stk_a, stk_b, size_a, info);
	else
		sort_big(stk_a, stk_b, size_a, info);
	free(info);
}
