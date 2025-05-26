/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 11:42:34 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/26 21:21:05 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}

// int main()
// {	
// 	ft_putchar('\n');

// 	ft_putnbr(2147483647);
// 	ft_putchar('\n');

// 	ft_putnbr(2147483646);
// 	ft_putchar('\n');

// 	ft_putnbr(-2147483648);
// 	ft_putchar('\n');

// 	ft_putnbr(-2147483647);
// 	ft_putchar('\n');

// 	ft_putchar('\n');

// 	return 0;
// }
