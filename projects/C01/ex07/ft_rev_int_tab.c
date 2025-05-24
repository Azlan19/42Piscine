/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:47:10 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/24 23:22:14 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// #include <stdio.h>
// int	main(void)
// {
// 	int i;
// 	int	int_array[5] = {5, 6, 7, 8, 9};
	
// 	printf("\nBEFORE:\n");
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("int_array[%d] = %d\n", i, int_array[i]);
// 		i++;
// 	}
	
// 	ft_rev_int_tab(int_array, 5);
	
// 	printf("\nAFTER:\n");
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("int_array[%d] = %d\n", i, int_array[i]);
// 		i++;
// 	}
	
// 	printf("\n");
	
// 	return (0);
// }
