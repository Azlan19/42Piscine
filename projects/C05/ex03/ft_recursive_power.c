/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 21:07:44 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/27 16:12:36 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}

// #include <stdio.h>
// int main()
// {
// 	printf("\n");
	
// 	printf("5 ^ (5)  = %d\n", ft_recursive_power(5, 3));
// 	printf("3 ^ (0)  = %d\n", ft_recursive_power(3, 0));
// 	printf("2 ^ (-1) = %d\n", ft_recursive_power(2, -1));

// 	printf("\n");
	
// 	return 0;
// }
