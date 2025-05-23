/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:47:56 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/23 14:41:29 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		counter;

	counter = '0';
	while (counter <= '9')
	{
		write(1, &counter, 1);
		counter++;
	}
}

// int main()
// {
// 	ft_print_numbers();
// 	write(1, "\n", 1);
// 
// 	return 0;
// }
