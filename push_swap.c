/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:41:04 by diogribe          #+#    #+#             */
/*   Updated: 2025/02/04 18:59:32 by diogribe         ###   ########.fr       */
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

int	*stack_maker(int ac, char **av)
{
	int	i;
	int	*arr;
	int	size;

	if (!av[2])
	{
		av = ft_split(av[1], ' ');
		size = 0;
		while(av[size])
			size++;
		arr = (int *)ft_calloc(size + 1, sizeof(int));
		i = -1;
		while (++i < size)
			arr[i] = ft_atoi(av[i]);
	}
	else
	{
		i = 0;
		arr = (int *)ft_calloc(ac, sizeof(int));
		while (++i < ac)
			arr[i - 1] = ft_atoi(av[i]);
	}
	return (arr);
}

void	radix_sort(int *a, int *b, int size)
{
	int	i;
	int	small;

	i = -1;
	while (++i < size)
		if(a[i] & 1 == 0)
			pb(a, b);
	
}

int	main(int ac, char **av)
{
	int	size;
	int	*a = stack_maker(ac, av);
	while(a[size])
			size++;
	int	b[size];

	radix_sort(a, b, size);
	for (int i = 0; i < ac - 1 ; i++)
	{
		if(a[i] != 0)
			ft_printf("%i ", a[i]);
		if(b[i]!= 0)
			ft_printf("%i", b[i]);
		ft_printf("\n");
	}
	ft_printf("a b");
}
