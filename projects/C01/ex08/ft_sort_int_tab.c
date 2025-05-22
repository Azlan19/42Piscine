/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:59:46 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/15 17:38:42 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

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
// i = 0;
// while (i < size)
// {
// 	printf("tab[i] = %d\n", tab[i]);
// 	i++;
// }

// int	main(void)
// {
// 	int	int_array[] = {9, 8, 7, 6, 4, 0};

// 	ft_sort_int_tab(int_array, 6);
// 	return (0);
// }
