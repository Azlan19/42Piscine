/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:04:53 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/25 21:51:48 by oazlan           ###   ########.fr       */
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
// 	char	sentence[] = " hi, hOW are yOU? 42Words FOrty-tWo; fifty+aNd+one";

// 	printf("\nBEFORE:\n");
// 	printf("%s\n", sentence);
	
// 	ft_strcapitalize(sentence);
	
// 	printf("\nAFTER:\n");
// 	printf("%s\n", sentence);
	
// 	printf("\n");
	
// 	return (0);
// }
