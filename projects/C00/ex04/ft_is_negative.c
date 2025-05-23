/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 21:44:42 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/23 14:41:26 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';
	if (n < 0)
	{
		write(1, &negative, 1);
	}
	else
	{
		write(1, &positive, 1);
	}
}

// int main()
// {
	
// 	write(1, " 9 = ", 5);
// 	ft_is_negative(9);
// 	write(1, "\n", 1);

// 	write(1, "-9 = ", 5);
// 	ft_is_negative(-9);
// 	write(1, "\n", 1);

// 	write(1, " 0 = ", 5);
// 	ft_is_negative(0);
// 	write(1, "\n", 1);

// 	return 0;
// }
