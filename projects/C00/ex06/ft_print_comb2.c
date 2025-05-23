/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 21:25:17 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/23 14:40:23 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int number)
{
	int	first_digit;
	int	second_digit;

	if (number > 9)
	{
		first_digit = number / 10;
		second_digit = number % 10;
		ft_putchar(first_digit + '0');
		ft_putchar(second_digit + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(number + '0');
	}
}

void	ft_final(int x, int y)
{
	ft_display(x);
	ft_putchar(' ');
	ft_display(y);
	if (x < 98 || y < 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_final(i, j);
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	ft_putchar('\n');
// 
// 	return (0);
// }
