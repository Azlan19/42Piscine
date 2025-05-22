/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 12:18:37 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/11 12:34:12 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_fibonacci(2));

// 	return 0;
// }
