/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 12:56:12 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/11 13:23:48 by oazlan           ###   ########.fr       */
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

// #include <stdio.h>
// int main()
// {
// 	int j;
// 	j = 0;
// 	while(j <= 16)
// 	{
// 		printf("%d, is prime number? = %d\n", j, ft_is_prime(j));
// 		j++;
// 	}
// 	return 0;
// }
