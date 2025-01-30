/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:42:53 by diogribe          #+#    #+#             */
/*   Updated: 2025/01/30 17:31:40 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* reverse rotate a */
void	rra(int *a)
{
	int	x;
	int	i;

	i = 0;
	if (a[0] && a[1])
	{
		while (a[i])
			i++;
		x = a[i - 1];
		while (i > 0)
		{
			i--;
			a[i] = a[i - 1];
		}
		a[i] = x;
	}
}

/* reverse rotate b */
void	rrb(int *b)
{
	int	x;
	int	i;

	i = 0;
	if (b[0] && b[1])
	{
		while (b[i])
			i++;
		x = b[i - 1];
		while (i > 0)
		{
			i--;
			b[i] = b[i - 1];
		}
		b[i] = x;
	}
}

/* reverse rotate a and b */
void	rrr(int *a, int *b)
{
	rra(a);
	rrb(b);
}
