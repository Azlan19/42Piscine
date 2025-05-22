/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:12:57 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/11 12:15:52 by oazlan           ###   ########.fr       */
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
// 	printf("%d\n", ft_iterative_power(5, -2));
// 	return 0;
// }
