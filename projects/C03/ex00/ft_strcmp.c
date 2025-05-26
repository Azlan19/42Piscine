/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:48:18 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/26 17:54:45 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char *word1 = "Hellz";
// 	char *word2 = "Hella";
	
// 	printf("\nThe difference between '%s' and '%s' is %d\n\n", word1, word2, ft_strcmp(word1, word2));
	
// 	return (0);
// }
