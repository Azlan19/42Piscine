/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 21:35:08 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/15 16:42:04 by oazlan           ###   ########.fr       */
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
// 	return 0;
// }
