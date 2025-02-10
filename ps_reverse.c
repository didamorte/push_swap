/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:42:53 by diogribe          #+#    #+#             */
/*   Updated: 2025/02/10 16:01:16 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* reverse rotate */

void	rev_rotate(int *c, int size_c)
{
	int	x;
	int	i;

	if (size_c < 2)
		return ;
	x = c[size_c - 1];
	i = size_c - 1;
	while (i > 0)
	{
		c[i] = c[i - 1];
		i--;
	}
	c[0] = x;
}

/* reverse rotate a */
void	rra(int *a, int size_a)
{
	rev_rotate(a, size_a);
	ft_printf("rra\n");
}

/* reverse rotate b */
void	rrb(int *b, int size_b)
{
	rev_rotate(b, size_b);
	ft_printf("rrb\n");
}

/* reverse rotate a and b */
void	rrr(int *a, int *b, int size_a, int size_b)
{
	rev_rotate(a, size_a);
	rev_rotate(b, size_b);
	ft_printf("rrr\n");
}
