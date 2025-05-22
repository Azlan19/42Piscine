/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:25:17 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/17 16:36:31 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
// 	char str1[] = "Hello";
// 	char str2[] = "World";
// 	char str3[4] = "Hi";
// 	//printf("str1 %d - ")
// 	// Compare str1 and str2, and print the result
// 	printf("%s\n", ft_strcat(str2, str1));

// 	// Compare str1 and str3, and print the result
// 	printf("%s\n", strcat(str3, str1));
// 	printf("%lu\n", sizeof(str1));

// 	return (0);
//   }
