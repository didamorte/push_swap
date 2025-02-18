/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <diogribe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 01:05:21 by diogribe          #+#    #+#             */
/*   Updated: 2025/02/18 16:09:12 by diogribe         ###   ########.fr       */
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

void	distribute_a_to_b(int *a, int *b, int *sizes, int bit)
{
	int	count;
	int	initial_a_size;

	initial_a_size = sizes[0];
	count = -1;
	while (++count < initial_a_size)
	{
		if ((a[0] >> bit) & 1)
			ra(a, sizes[0]);
		else
			pb(a, b, &sizes[0], &sizes[1]);
	}
}

void	recollect_b_to_a(int *a, int *b, int *sizes)
{
	while (sizes[1] > 0)
		pa(a, b, &sizes[0], &sizes[1]);
}

void	radix_sort(int *a, int *b, int a_size, int b_size)
{
	int	sizes[2];
	int	bit;
	int	max_bit;
	int	max_num;

	sizes[0] = a_size;
	sizes[1] = b_size;
	max_num = max_number(a, sizes[0]);
	max_bit = max_bits(max_num);
	bit = -1;
	while (++bit < max_bit)
	{
		if (is_sorted(a, sizes[0]))
			break ;
		distribute_a_to_b(a, b, sizes, bit);
		recollect_b_to_a(a, b, sizes);
	}
}
