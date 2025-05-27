/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 13:26:51 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/27 16:29:32 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

// #include <stdio.h>
// int main()
// {
// 	int num1 = 7;
// 	int num2 = 50;
// 	int num3 = 800;
	
// 	printf("\n\n");
		
// 	printf("The next prime number after %d is %d\n", num1, ft_find_next_prime(num1));
// 	printf("The next prime number after %d is %d\n", num2, ft_find_next_prime(num2));
// 	printf("The next prime number after %d is %d\n", num3, ft_find_next_prime(num3));
	
// 	printf("\n");
	
// 	return 0;
// }
