/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:57:36 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/25 21:48:38 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (str);
	}
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

// #include <stdio.h>
// int main()
// {
// 	char sentence[] = "ABC 1 DeF 2 gHI 3 JKl";
	
// 	printf("\nBEFORE:\n");
// 	printf("%s\n", sentence);
	
// 	ft_strlowcase(sentence);
	
// 	printf("\nAFTER:\n");
// 	printf("%s\n", sentence);
	
// 	printf("\n");
	
// 	return 0;
// }
