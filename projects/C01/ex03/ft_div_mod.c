/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 00:25:42 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/24 23:03:15 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// int main()
// {
// 	int a = 10;
// 	int b = 3;
//     int value_1 = 0;
// 	int value_2 = 0;

// 	printf("\na = %d, b = %d\n", a, b);

// 	printf("\nBEFORE:\n");
// 	printf("value_1 = %d, &value_1 = %p\n", value_1, &value_1);
// 	printf("value_2 = %d, &value_2 = %p\n", value_2, &value_2);

// 	ft_div_mod(a, b, &value_1, &value_2);

// 	printf("\nAFTER:\n");
// 	printf("value_1 = %d, &value_1 = %p\n", value_1, &value_1);
// 	printf("value_2 = %d, &value_2 = %p\n", value_2, &value_2);

// 	printf("\n");

// 	return 0;
// }
