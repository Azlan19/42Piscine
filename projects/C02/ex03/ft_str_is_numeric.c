/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:01:55 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/01 17:57:47 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	statement;

	if (*str == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if ('0' <= str[i] && str[i] <= '9')
		{
			statement = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (statement);
}

// int main()
// {
// 	char *word = "1234";
// 	ft_str_is_numeric(word);
// 	return 0;
// }
