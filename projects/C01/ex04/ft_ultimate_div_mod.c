/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 00:35:38 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/24 23:07:33 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	remainder;
	
	division = *a / *b;
	remainder = *a % *b;
	*a = division;
	*b = remainder;
}

// #include <stdio.h>
// int main()
// {
// 	int a = 17;
// 	int b = 5;

// 	printf("\na = %d, b = %d\n", a, b);

// 	printf("\nBEFORE:\n");
// 	printf("a = %d, &a = %p\n", a, &a);
// 	printf("b =  %d, &b = %p\n", b, &b);

// 	ft_ultimate_div_mod(&a, &b);

// 	printf("\nAFTER:\n");
// 	printf("a = %d, &a = %p\n", a, &a);
// 	printf("b = %d, &b = %p\n", b, &b);

// 	printf("\n");

// 	return 0;
// }
