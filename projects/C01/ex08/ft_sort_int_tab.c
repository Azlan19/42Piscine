/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:59:46 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/24 23:31:21 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	
	temp = 0;
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
			continue ;
		}
		i++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int i;
// 	int array_size = 6;
// 	int	int_array[] = {9, 5, 7, 4, 8, 0};
	
// 	printf("\nBEFORE:\n");
// 	i = 0;
// 	while (i < array_size)
// 	{
// 		printf("int_array[%d] = %d\n", i, int_array[i]);
// 		i++;
// 	}
	
// 	ft_sort_int_tab(int_array, 6);
	
// 	printf("\nAFTER:\n");
// 	i = 0;
// 	while (i < array_size)
// 	{
// 		printf("int_array[%d] = %d\n", i, int_array[i]);
// 		i++;
// 	}
	
// 	printf("\n");
	
// 	return (0);
// }
