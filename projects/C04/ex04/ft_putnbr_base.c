/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:44:54 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/26 21:31:42 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_checkerrors(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_print_number(long nbr, char *base, int baselength)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	if (nbr >= baselength)
	{
		ft_print_number(nbr / baselength, base, baselength);
	}
	ft_putchar(base[nbr % baselength]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	baselength;

	baselength = ft_strlen(base);
	if (baselength > 1 && ft_checkerrors(base))
	{
		ft_print_number(nbr, base, baselength);
	}
}

// #include <stdio.h>
// int main()
// {
// 	int number = -42;
// 	char *base = "01";

// 	printf("\nNumber = %d\n", number);
// 	printf("Base   = '%s'\n", base);

// 	printf("\n");

// 	printf("Result:\n");
// 	ft_putnbr_base(number, base);

// 	printf("\n\n");

// 	return (0);
// }
