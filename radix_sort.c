/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 01:05:21 by diogribe          #+#    #+#             */
/*   Updated: 2025/02/12 03:46:29 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_number(int *a, int size)
{
	int	i;
	int	max;

	i = 0;
	max = a[i];
	while (++i < size)
		if (a[i] > max)
			max = a[i];
	return (max);
}

int	max_bits(int max)
{
	int	max_bits;

	max_bits = 0;
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(int *a, int *b, int a_size, int b_size)
{
	int	bits;
	int	big;
	int	i;
	int	j;

	big = max_number(a, a_size);
	bits = max_bits(big);
	i = -1;
	while (++i < bits)
	{
		j = -1;
		while (++j <= big && !is_sorted(a, a_size))
		{
			if ((a[0] >> i) & 1)
				ra(a, a_size);
			else
				pb(a, b, &a_size, &b_size);
		}
		while (b_size-- && j <= bits && !is_sorted(b, b_size))
		{
			if (((b[0] >> j) & 1) == 0)
				rb(b, b_size);
			else
				pa(a, b, &a_size, &b_size);
		}
		if (is_sorted(b, b_size))
			while (b_size != 0)
				pa(a, b, &a_size, &b_size);
			
	}
	while (b_size != 0)
		pa(a, b, &a_size, &b_size);
}
