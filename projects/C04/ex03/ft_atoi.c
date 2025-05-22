/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:45:28 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/20 16:55:19 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checkspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r')
	{
		return (1);
	}
	return (0);
}

int	ft_negative_counter(char c)
{
	while (c == '-' || c == '+')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	counter;
	int	final_number;

	counter = 0;
	i = 0;
	while (ft_checkspace(str[i]))
		i++;
	while (ft_negative_counter(str[i]))
	{
		if (str[i] == '-')
			counter++;
		i++;
	}
	final_number = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		final_number = (final_number * 10) + ((str[i] - '0'));
		i++;
	}
	if (counter % 2 == 1)
		final_number = -final_number;
	return (final_number);
}

// #include <stdio.h>
// int main()
// {
// 	char *word =  "";
// 	printf("%d\n", ft_atoi(word));
// 	return (0);
// }
