/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:12:57 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/27 16:05:24 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	temp;

	temp = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	i = 1;
	while (i < power)
	{
		nb = nb * temp;
		i++;
	}
	return (nb);
}

// #include <stdio.h>
// int main()
// {
// 	printf("\n");
	
// 	printf("5 ^ (5)  = %d\n", ft_iterative_power(5, 3));
// 	printf("3 ^ (0)  = %d\n", ft_iterative_power(3, 0));
// 	printf("2 ^ (-1) = %d\n", ft_iterative_power(2, -1));

// 	printf("\n");
	
// 	return 0;
// }
