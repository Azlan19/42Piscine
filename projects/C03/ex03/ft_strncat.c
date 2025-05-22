/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 20:45:40 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/17 16:36:52 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	int				j;
	unsigned int	k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = 0;
	while (src[j] != '\0' && k < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	char word1[15] = "Hello";
// 	char *word2 = "World";
// 	printf("%s\n", ft_strncat(word1, word2, 2));

// 	return (0);
// }
