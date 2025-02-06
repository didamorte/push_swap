/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:41:04 by diogribe          #+#    #+#             */
/*   Updated: 2025/02/05 23:44:53 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	dup_check(int *a)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = 0;
	while (a[size])
		size++;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (a[i] == a[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	*single_stack_maker(char *av, int *size)
{
	int	i;
	int	*arr;
	char	**splitted;

	splitted = ft_split(av, ' ');
	*size = 0;
	while(splitted[*size])
		(*size)++;
	arr = (int *)ft_calloc(*size, sizeof(int));
	i = 0;
	while (i < *size)
	{
		arr[i] = ft_atoi(splitted[i]);
		i++;
	}
	i = 0;
	while (i < *size)
	{
		free(splitted[i]);
		i++;
	}
	free(splitted);
	return (arr);
}

int	*stack_maker(int ac, char **av, int *size)
{
	int	i;
	int	*arr;

	if (ac == 2)
	{
		arr = single_stack_maker(av[1], size);
	}
	else
	{
		i = 1;
		*size = ac - 1;
		arr = (int *)ft_calloc(*size, sizeof(int));
		while (i < ac)
		{
			arr[i - 1] = ft_atoi(av[i]);
			i++;
		}
	}
	return (arr);
}

int	main(int ac, char **av)
{
	int	size;
	int	*a = stack_maker(ac, av, &size);
	int	*b = ft_calloc(size, sizeof(int));

	normalize_array(a, size);
	radix_sort(a, b, size);
	free(a);
	free(b);
}
