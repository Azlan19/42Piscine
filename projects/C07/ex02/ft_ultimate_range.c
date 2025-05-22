/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 20:39:43 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/21 11:45:10 by oazlan           ###   ########.fr       */
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
// 	int	*array;

// 	array = NULL;
// 	printf("%d\n", ft_ultimate_range(&array, 0, 5));

// 	return (0);
// }