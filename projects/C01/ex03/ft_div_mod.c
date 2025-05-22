/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 00:25:42 by oazlan            #+#    #+#             */
/*   Updated: 2025/04/30 20:54:06 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main()
// {
//      int num1 = 4;
//      int num2 = 3;
//      printf("\nBefore:\na = 10, b = 3\n");
// 	 printf("num1 = %d, num2 = %d\n", num1, num2);
// 	 printf("&num1 = %p, &num2 = %p\n", &num1, &num2);
//      ft_div_mod(10, 3, &num1, &num2);
// 	 printf("\nAfter:\n");
// 	 printf("num1 = %d, num2 = %d\n", num1, num2);
// 	 printf("&num1 = %p, &num2 = %p\n", &num1, &num2);
// }
