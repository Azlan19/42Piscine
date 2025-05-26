/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 11:26:13 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/26 21:15:51 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	char *word = "whataaaaa";
	
	
// 	printf("\nString = '%s'\n", word);
// 	printf("\nString length = %d\n\n", ft_strlen(word));

// 	return 0;
// }
