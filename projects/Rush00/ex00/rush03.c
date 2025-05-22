/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segribas <segribas@student.42heilbronn.de>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-04 10:20:55 by segribas          #+#    #+#             */
/*   Updated: 2025-05-04 10:20:55 by segribas         ###   ########.de       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_row(int width)
{
	int	row_position;

	row_position = 1;
	while (row_position <= width)
	{
		if (row_position == 1)
		{
			ft_putchar('A');
		}
		else if (row_position == width)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		row_position++;
	}
	ft_putchar('\n');
}

void	middle(int width)
{
	int	row_position;

	row_position = 1;
	while (row_position <= width)
	{
		if (row_position == 1)
		{
			ft_putchar('B');
		}
		else if (row_position == width)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		row_position++;
	}
	ft_putchar('\n');
}

void	last_row(int width)
{
	int	row_position;

	row_position = 1;
	while (row_position <= width)
	{
		if (row_position == 1)
		{
			ft_putchar('A');
		}
		else if (row_position == width)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		row_position++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	column_position;

	if (x == 0 || y == 0)
	{
		return ;
	}
	first_row(x);
	column_position = 1;
	while (column_position <= (y - 2))
	{
		middle(x);
		column_position++;
	}
	if (y > 1)
	{
		last_row(x);
	}
}
