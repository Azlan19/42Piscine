/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:44:36 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/26 20:49:03 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	counter;
	
	counter = 0;
	while (src[counter] != '\0')
	{
		counter++;
	}
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (counter);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char src[] = "Hello, world!";
// 	char dest[20];
// 	unsigned int size_limit = 10;

	
// 	printf("\nBEFORE:\n");
// 	printf("Source           = '%s'\n", src);
// 	printf("Destination      = '%s'\n", dest);
// 	printf("Size Limit       = %d\n", size_limit);
	
// 	ft_strlcpy(dest, src, size_limit);
	
// 	printf("\nAFTER:\n");
// 	printf("Source           = '%s'\n", src);
// 	printf("Destination      = '%s'\n", dest);
// 	printf("Length of source = %u\n", ft_strlcpy(dest, src, size_limit));
	
// 	printf("\n");
	
// 	return (0);
// }
