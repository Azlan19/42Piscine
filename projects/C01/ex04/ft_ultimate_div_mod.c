/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 00:35:38 by oazlan            #+#    #+#             */
/*   Updated: 2025/04/30 21:00:18 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	remainder;

	division = *a / *b;
	remainder = *a % *b;
	*a = division;
	*b = remainder;
}

// int main()
// {
//      int num1 = 17;
//      int num2 = 5;
//      printf("\nBefore:\n");
//      printf("num1 = %d, num2 = %d\n", num1, num2);
//      printf("&num1 = %p, &num2 = %p\n", &num1, &num2);
//      ft_ultimate_div_mod(&num1, &num2);
//      printf("\nAfter:\n");
// 	 printf("num1 = %d, num2 = %d\n", num1, num2);
// 	 printf("&num1 = %p, &num2 = %p\n", &num1, &num2);
// }
