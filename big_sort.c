/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 01:05:21 by diogribe          #+#    #+#             */
/*   Updated: 2025/02/10 18:58:28 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_to_top(int *a, int size,int *b, t_top_bottom index)
{
	int	moves_top;
	int	moves_bot;

	moves_top = index.top;
	moves_bot = size - index.bottom;
	while (moves_top > 0 && moves_bot > 0 && size > 1)
	{
		rr(a, b, size, size);
		moves_top--;
		moves_bot--;
	}
	while (moves_top > 0)
	{
		ra(a, size);
		moves_top--;
	}
	while (moves_bot > 0)
	{
		rra(a, size);
		moves_bot--;
	}
}

void	moving_a_and_b(int *a, int *b, int *a_size, int *b_size)
{
	t_chunk			chunk;
	t_top_bottom	pos;
	int				size;

	size = *a_size;
	chunk.start = 0;
	chunk.end = get_chunk_size(size);
	while (*a_size > 0)
	{
		pos = scan_top_n_bot(a, *a_size, chunk.start, chunk.end);
		if (pos.top == -1 && pos.bottom == -1)
		{
			chunk.start = chunk.end;
			chunk.end += get_chunk_size(*a_size);
			if (chunk.start >= *a_size)
				break ;
			continue ;
		}
		move_to_top(a, *a_size, b, pos);
		pb(a, b, a_size, b_size);
	}
}

void	move_largest_to_top(int *a, int *b, int *a_size, int *b_size)
{
	int	moves;
	int	idx;

	while (*b_size > 0)
	{
		idx = find_largest_index(b, *b_size);
		if (idx > *b_size / 2)
		{
			moves = *b_size - idx;
			while (moves-- > 0)
				rrb(b, *b_size);
		}
		else
		{
			moves = idx;
			while (moves-- > 0)
				rb(b, *b_size);
		}
		pa(a, b, a_size, b_size);
	}
}

void	big_sort(int *a, int *b, int size)
{
	int	a_size;
	int	b_size;

	a_size = size;
	b_size = 0;
	moving_a_and_b(a, b, &a_size, &b_size);
	while (b_size > 0)
	{
		move_largest_to_top(a, b, &a_size, &b_size);
	}
}
