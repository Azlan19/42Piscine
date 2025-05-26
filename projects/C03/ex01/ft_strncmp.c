/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:20:21 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/26 17:58:33 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
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
// 	int limit = 4;
	
// 	printf("\nThe difference between '%s' and '%s' when comparing at most the first %d characters is %d\n\n", word1, word2, limit, ft_strncmp(word1, word2, limit));
	
// 	return (0);
// }
