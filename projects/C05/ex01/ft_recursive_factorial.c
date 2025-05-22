/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:13:47 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/12 18:56:31 by oazlan           ###   ########.fr       */
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
// 	printf("%d\n", ft_recursive_factorial(-1));
// 	return 0;
// }
