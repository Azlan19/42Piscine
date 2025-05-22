/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:47:10 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/15 17:31:31 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size)
	{
		temp = tab[size - 1];
		tab[size - 1] = tab[i];
		tab[i] = temp;
		size--;
		i++;
	}
}

// int temp_size;
// temp_size = size;
// i = 0;
// while (i < temp_size)
// {
// 	printf("tab[%d] = %d\n", i, tab[i]);
// 	i++;
// }

// int	main(void)
// {
// 	int	int_array[5] = {5, 6, 7, 8, 9};

// 	ft_rev_int_tab(int_array, 5);
// 	return (0);
// }
