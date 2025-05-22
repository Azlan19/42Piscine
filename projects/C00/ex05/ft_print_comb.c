/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 21:03:04 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/18 11:09:43 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_commas(char a, char b, char c)
{
	if (a != '7' || b != '8' || c != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				ft_commas(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

// int main()
// {
// 	ft_print_comb();
// 	return (0);
// }
