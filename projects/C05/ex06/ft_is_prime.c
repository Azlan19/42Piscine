/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 12:56:12 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/27 16:26:25 by oazlan           ###   ########.fr       */
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
// 	int limit = 10;
// 	int i;

// 	printf("\n0 = YES, 1 = NO\n\n");
	
// 	i = 0;
// 	while(i < limit)
// 	{
// 		printf("%d -> prime number? = %d\n", i, ft_is_prime(i));
// 		i++;
// 	}
	
// 	printf("\n");
	
// 	return 0;
// }
