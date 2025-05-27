/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 12:37:43 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/27 16:23:16 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}

// #include <stdio.h>
// int main()
// {
// 	int num1 = 12;
// 	int num2 = 36;
// 	int num3 = 81;
	
// 	printf("\nx = 0 if x is not a square number\n\n");
	
// 	printf("Square root of %d = %d\n", num1, ft_sqrt(num1));
// 	printf("Square root of %d = %d\n", num2, ft_sqrt(num2));
// 	printf("Square root of %d = %d\n", num3, ft_sqrt(num3));
	
// 	printf("\n");
	
// 	return 0;
// }
