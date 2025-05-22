/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:13:07 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/01 17:47:14 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
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
		else if ('a' <= str[i] && str[i] <= 'z')
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
// 	char *word = "ZNAAAZAnocds";
// 	ft_str_is_alpha(word);
// 	return 0;
// }
