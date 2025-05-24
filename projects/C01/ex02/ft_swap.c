/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 00:14:04 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/24 22:49:24 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

// #include <stdio.h>
// int	main()
// {
// 	int	num1 = 4;
// 	int num2 = 3;
	
// 	printf("\nBEFORE:\n");
// 	printf("num1, %d, is stored in %p\n", num1, &num1);
// 	printf("num2, %d, is stored in %p\n\n",num2, &num2);
	
// 	ft_swap(&num1, &num2);
	
// 	printf("AFTER:\n");
// 	printf("num1, %d, is stored in %p\n",num1, &num1);
// 	printf("num2, %d, is stored in %p\n",num2, &num2);
	
// 	printf("\n");

// 	return 0;
// }
