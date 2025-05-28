/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 20:39:43 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/28 13:19:52 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	i;
	int	size;

	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	ptr = malloc(sizeof(int) * (size));
	if (ptr == NULL)
	{
		return (0);
	}
	i = 0;
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	*range = ptr;
	return (size);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int *range = NULL;
// 	int min = 3;
// 	int max = 8;
// 	int size;
// 	int i;

// 	size = ft_ultimate_range(&range, min, max);
	
// 	printf("\n");
	
// 	if (range == NULL)
// 	{
// 		if (size == 0)
// 			printf("Empty range or memory allocation failed.\n");
// 		else
// 			printf("Unexpected error.\n");
// 		return (1);
// 	}

// 	printf("Range from %d to %d (exclusive):\n", min, max);
// 	for (i = 0; i < size; i++)
// 	{
// 		printf("%d ", range[i]);
// 	}
// 	printf("\nAllocated size: %d\n", size);
	
// 	printf("\n");

// 	free(range);

// 	return 0;
// }
