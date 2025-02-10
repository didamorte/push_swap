/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:19:04 by diogribe          #+#    #+#             */
/*   Updated: 2025/02/10 19:02:01 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	get_chunk_size(int size)
{
	if (size >= 500)
		return (size / 45);
	else if (size >= 100)
		return (size / 10);
	else if (size >= 10)
		return (size / 5);
	return (size);
}
