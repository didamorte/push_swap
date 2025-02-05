/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:42:53 by diogribe          #+#    #+#             */
/*   Updated: 2025/02/05 21:19:17 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* reverse rotate a */
void	rra(int *a, int size_a)
{
	int	x;
	int	i;

	if (size_a < 2)
		return ;
	x = a[size_a - 1];
	i = size_a - 1;
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[0] = x;
}

/* reverse rotate b */
void	rrb(int *b, int size_b)
{
	int	x;
	int	i;

	if (size_b < 2)
		return ;
	x = b[size_b - 1];
	i = size_b - 1;
	while (i > 0)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[0] = x;
}

/* reverse rotate a and b */
void	rrr(int *a, int *b, int size_a, int size_b)
{
	rra(a, size_a);
	rrb(b, size_b);
}
