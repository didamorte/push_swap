/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:34:14 by diogribe          #+#    #+#             */
/*   Updated: 2025/02/05 22:40:44 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*copy_array(int *arr, int size)
{
	int	*copy;
	int	i;

	copy = ft_calloc(size, sizeof(int));
	i = 0;
	while (i < size)
	{
		copy[i] = arr[i];
		i++;
	}
	return (copy);
}

void	selection_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	min_index;
	int	temp;

	i = 0;
	while (i < size)
	{
		min_index = i;
		j = i + 1;
		while (j < size)
		{
			if (arr[j] < arr[min_index])
				min_index = j;
			j++;
		}
		temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
		i++;
	}
}

void	normalize_array(int *arr, int size)
{
	int	*copy;
	int	i;
	int	j;

	i = 0;
	copy = copy_array(arr, size);
	selection_sort(copy, size);
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (arr[i] == copy[j])
			{
				arr[i] = j;
				break;
			}
			j++;
		}
		i++;
	}
	free(copy);
}
