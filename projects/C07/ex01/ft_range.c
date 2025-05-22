/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 17:11:35 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/14 13:26:29 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

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
// printf("%d\n", ptr[i]);

// int main()
// {
// 	ft_range(1, 18);
// 	return 0;
// }
