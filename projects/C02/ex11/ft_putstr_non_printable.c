/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:46:26 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/26 17:52:34 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_dec_to_hex(unsigned char c)
{
	int		first_digit;
	int		second_digit;
	char	*base;
	char	*backslash;

	backslash = "\\";
	base = "0123456789abcdef";
	first_digit = c / 16;
	second_digit = c % 16;
	write(1, backslash, 1);
	write(1, &base[first_digit], 1);
	write(1, &base[second_digit], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (32 <= str[i] && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			ft_dec_to_hex(str[i]);
		}
		i++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *string = "Hello\nHow are you?";

// 	printf("\nBEFORE:\n");
// 	printf("Hello(\\n)\nHow are you?\n");
	
// 	printf("\nAFTER:\n");
// 	ft_putstr_non_printable(string);
	
// 	printf("\n\n");
// 	return (0);
// }
