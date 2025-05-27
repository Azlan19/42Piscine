/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:13:47 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/27 16:01:25 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb < 1)
	{
		return (1);
	}
	else
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
}

// #include <stdio.h>
// int main()
// {
// 	printf("\n");
	
// 	printf(" 5! = %d\n", ft_recursive_factorial(5));
// 	printf(" 0! = %d\n", ft_recursive_factorial(0));
// 	printf("-3! = %d\n", ft_recursive_factorial(-3));
	
// 	printf("\n");
	
// 	return 0;
// }
