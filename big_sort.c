/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 01:05:21 by diogribe          #+#    #+#             */
/*   Updated: 2025/02/07 22:25:28 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#define CHUNK_SIZE 46

t_top_bottom	scan_top_n_bot(int *a, int size, int chunk_start, int chunk_end)
{
	int				i;
	t_top_bottom	result;

	result.top = -1;
	result.bottom = -1;
	i = -1;
	while (++i < size)
	{
		if (a[i] >= chunk_start && a[i] < chunk_end)
		{
			result.top = i;
			break ;
		}
	}
	i = size;
	while (--i >= 0)
	{
		if (a[i] >= chunk_start && a[i] < chunk_end)
		{
			result.bottom = i;
			break ;
		}
	}
	return (result);
}

void	move_to_top(int *a, int size, t_top_bottom index)
{
	int	moves_top;
	int	moves_bot;

	if (index.top == -1 && index.bottom == -1)
		return ;
	moves_top = index.top;
	moves_bot = size - index.bottom;
	if (index.bottom != -1
		&& (index.top == -1 || moves_bot < moves_top))
	{
		while (moves_bot-- > 0)
			rra(a, size);
	}
	else
	{
		while (moves_top-- > 0)
			ra(a, size);
	}
}

void	moving_a_and_b(int *a, int *b, int *a_size, int *b_size)
{
	t_chunk			chunk;
	t_top_bottom	pos;

	chunk.start = 0;
	chunk.end = CHUNK_SIZE;
	while (*a_size > 0)
	{
		pos = scan_top_n_bot(a, *a_size, chunk.start, chunk.end);
		if (pos.top == -1 && pos.bottom == -1)
		{
			chunk.start = chunk.end;
			chunk.end += CHUNK_SIZE;
			continue ;
		}
		if (pos.top != 0)
			move_to_top(a, *a_size, pos);
		pb(a, b, a_size, b_size);
	}
}

int	find_largest_index(int *b, int b_size)
{
	int	i;
	int	largest;
	int	index;

	if (b_size <= 0)
		return (-1);
	largest = b[0];
	index = 0;
	i = 1;
	while (i < b_size)
	{
		if (b[i] > largest)
		{
			largest = b[i];
			index = i;
		}
		i++;
	}
	return (index);
}

void	big_sort(int *a, int *b, int size)
{
	int	a_size;
	int	b_size;
	int	idx;

	a_size = size;
	b_size = 0;
	moving_a_and_b(a, b, &a_size, &b_size);
	while (b_size > 0)
	{
		idx = find_largest_index(b, b_size);
		if (idx > b_size / 2)
			while (idx++ < b_size)
				rrb(b, b_size);
		else
			while (idx-- > 0)
				rb(b, b_size);
		pa(a, b, &a_size, &b_size);
	}
}
