/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 17:11:35 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/28 13:17:23 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;
	int	size;
	
	if (max <= min)
	{
		return (0);
	}
	size = max - min;
	ptr = (int *) malloc(sizeof(int) * size);
	if (ptr == NULL)
	return (0);
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int min = 5;
// 	int max = 10;
// 	int *range;
// 	int i;

// 	range = ft_range(min, max);
	
// 	printf("\n");
// 	if (range == NULL)
// 	{
// 		printf("ft_range returned NULL (invalid range or memory allocation failed).\n");
// 		return (1);
// 	}

// 	printf("Range from %d to %d (exclusive):\n", min, max);
// 	for (i = 0; i < max - min; i++)
// 	{
// 		printf("%d ", range[i]);
// 	}
// 	printf("\n\n");

// 	free(range);
	
// 	return 0;
// }
