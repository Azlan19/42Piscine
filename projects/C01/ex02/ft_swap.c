/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 00:14:04 by oazlan            #+#    #+#             */
/*   Updated: 2025/04/30 20:31:19 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// int	main()
// {
// 	int	num1 = 4;
// 	int num2 = 3;
// 	printf("\nBefore:\nnum1, %d, is stored in %p\n", num1, &num1);
// 	printf("num2, %d, is stored in %p\n\n",num2, &num2);
// 	ft_swap(&num1, &num2);
// 	printf("After:\nnum1, %d, is stored in %p\n",num1, &num1);
// 	printf("num2, %d, is stored in %p\n",num2, &num2);
// }
