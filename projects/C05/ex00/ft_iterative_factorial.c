/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:46:31 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/27 15:59:31 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	result = 1;
	i = 1;
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	printf("\n");
	
// 	printf(" 5! = %d\n", ft_iterative_factorial(5));
// 	printf(" 0! = %d\n", ft_iterative_factorial(0));
// 	printf("-3! = %d\n", ft_iterative_factorial(-3));
	
// 	printf("\n");
	
// 	return 0;
// }
