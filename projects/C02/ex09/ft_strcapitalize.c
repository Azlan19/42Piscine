/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:04:53 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/18 17:43:58 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*lowereverything(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*new_str;

	new_str = lowereverything(str);
	i = 0;
	if ('a' <= new_str[i] && new_str[i] <= 'z')
	{
		new_str[i] = new_str[i] - 32;
	}
	i++;
	while (new_str[i] != '\0')
	{
		if (!('a' <= new_str[i - 1] && new_str[i - 1] <= 'z')
			&& !('A' <= new_str[i - 1] && new_str[i - 1] <= 'Z')
			&& !('0' <= new_str[i - 1] && new_str[i - 1] <= '9'))
		{
			if ('a' <= new_str[i] && new_str[i] <= 'z')
			{
				new_str[i] = new_str[i] - 32;
			}
		}
		i++;
	}
	return (new_str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	sentence[] = " hi, hOW are you? 42Words forty-two; fifty+and+one";

// 	printf("%s\n", ft_strcapitalize(sentence));
// 	return (0);
// }
