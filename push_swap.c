/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:41:04 by diogribe          #+#    #+#             */
/*   Updated: 2025/02/11 22:52:57 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_error(int *arr, int size)
{
	int	i;

	i = 0;
	if (size == 1)
		return (2);
	if (dup_check(arr, size))
		return (write(2, "ErrorD\n", 7));
	if (is_sorted(arr, size))
		return (2);
	i++;
	return (0);
}

int	arg_error(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac < 2)
		return (0);
	while (i < ac)
	{
		if (!is_valid_number(av[i]))
			return (write(2, "ErrorN\n", 7));
		if (!in_range(av[i]))
			return (write(2, "ErrorR\n", 7));
		i++;
	}
	return (0);
}

int	*single_stack_maker(char *av, int *size)
{
	int		i;
	int		*arr;
	char	**splitted;

	splitted = ft_split(av, ' ');
	*size = 0;
	while (splitted[*size])
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

void print_stacks(int *a, int *b, int a_size, int b_size)
{
    int i;

    printf("Stack A: ");
    for (i = 0; i < a_size; i++)
	{
        printf("%d ", a[i]);
	}
    printf("\n");

    printf("Stack B: ");
    for (i = 0; i < b_size; i++)
	{
        printf("%d ", b[i]);
	}
	printf("\n\n");
}

int	main(int ac, char **av)
{
	int	size;
	int	*a;
	int	*b;

	if (arg_error(ac, av) > 0)
		return (0);
	a = stack_maker(ac, av, &size);
	b = ft_calloc(size, sizeof(int));
	if (stack_error(a, size) > 0)
	{
		free_stacks(a, b);
		return (0);
	}
	normalize_array(a, size);
	if (size == 2)
		sort_two(a);
	else if (size == 3)
		three_sort(a);
	else if (size == 4)
		four_sort(a, b);
	else if (size == 5)
		five_sort(a, b);
	else
		radix_sort(a, b, size, 0);
	//print_stacks(a, b, size, size);
	free_stacks(a, b);
}
