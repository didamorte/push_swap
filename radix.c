/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:54:30 by diogribe          #+#    #+#             */
/*   Updated: 2025/02/05 22:26:50 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	count_max_bits(int *arr, int size)
{
	int max_num;
	int bits;
	int i;

	if (size == 0)
		return (0);

	max_num = arr[0];
	bits = 0;
	i = 1;
	while (i < size)
	{
		if (ft_abs(arr[i]) > ft_abs(max_num))
			max_num = arr[i];
		i++;
	}
	while (ft_abs(max_num) > 0)
	{
		max_num >>= 1;
		bits++;
	}
	return bits;
}

void	radix_sort(int *a, int *b, int size)
{
	int num_bits = count_max_bits(a, size);

	int	a_size = size;
	int	b_size = 0;
	int	bit = 0;
	int i = 0;

	while (bit < num_bits)
	{
		i = a_size;
		while (i > 0)
		{
			if (((a[0] >> bit) & 1) == 0)
				pb(a, b, &a_size, &b_size);
			else
				ra(a, a_size);
			i--;
		}
		while (b_size > 0)
			pa(a, b, &a_size, &b_size);
		bit++;
	}
}
