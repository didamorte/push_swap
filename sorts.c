/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:54:30 by diogribe          #+#    #+#             */
/*   Updated: 2025/02/11 22:58:10 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_small(int *a, int size)
{
	int	small;
	int	i;

	if (size <= 0)
		return (0);
	small = a[0];
	i = 1;
	while (i < size)
	{
		if (a[i] < small)
			small = a[i];
		i++;
	}
	return (small);
}

void	sort_two(int *a)
{
	if (a[0] > a[1])
		sa(a, 2);
}

void	three_sort(int *a)
{
	if (a[0] > a[1] && a[0] < a[2])
		sa(a, 3);
	else if (a[0] > a[1] && a[1] > a[2])
	{
		sa(a, 3);
		rra(a, 3);
	}
	else if (a[0] > a[2] && a[1] < a[2])
		ra(a, 3);
	else if (a[0] < a[1] && a[0] > a[2])
		rra(a, 3);
	else if (a[0] < a[1] && a[1] > a[2])
	{
		sa(a, 3);
		ra(a, 3);
	}
}

void	four_sort(int *a, int *b)
{
	int	a_size;
	int	b_size;

	a_size = 4;
	b_size = 0;
	while (a[0] != 0)
		rra(a, 4);
	if (is_sorted(a, 4))
		return ;
	pb(a, b, &a_size, &b_size);
	three_sort(a);
	pa(a, b, &a_size, &b_size);
}

void	five_sort(int *a, int *b)
{
	int	a_size;
	int	b_size;
	int	smallest;

	a_size = 5;
	b_size = 0;
	smallest = find_small(a, a_size);
	while (a[0] != smallest)
		rra(a, 5);
	if (is_sorted(a, 5))
		return ;
	pb(a, b, &a_size, &b_size);
	while (a[0] != smallest + 1)
		rra(a, 4);
	if (is_sorted(a, 4))
	{
		pa(a, b, &a_size, &b_size);
		return ;
	}
	pb(a, b, &a_size, &b_size);
	three_sort(a);
	pa(a, b, &a_size, &b_size);
	pa(a, b, &a_size, &b_size);
}
