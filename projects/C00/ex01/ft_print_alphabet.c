/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 21:24:54 by oazlan            #+#    #+#             */
/*   Updated: 2025/04/30 19:52:42 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	counter;

	counter = 'a';
	while (counter <= 'z')
	{
		write(1, &counter, 1);
		counter++;
	}
}

// int main()
// {
// 	ft_print_alphabet();
// 	return 0;
// }
