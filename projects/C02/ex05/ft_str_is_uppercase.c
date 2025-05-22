/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:20:01 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/01 18:05:13 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
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
		if ('A' <= str[i] && str[i] <= 'Z')
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
// 	char *word = "ASDaA";
// 	ft_str_is_uppercase(word);
// 	return 0;
// }
