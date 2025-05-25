/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:39:30 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/25 21:46:23 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char sentence[] = "abc 1 dEf 2 Ghi 3 jkL";
	
// 	printf("\nBEFORE:\n");
// 	printf("%s\n", sentence);
	
// 	ft_strupcase(sentence);
	
// 	printf("\nAFTER:\n");
// 	printf("%s\n", sentence);
	
// 	printf("\n");
	
// 	return 0;
// }
