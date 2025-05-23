/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 21:35:08 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/23 14:23:56 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		counter;

	counter = 'z';
	while (counter >= 'a')
	{
		write(1, &counter, 1);
		counter--;
	}
}

// int main()
// {
// 	ft_print_reverse_alphabet();
// 	write(1, "\n", 1);
// 	return 0;
// }
