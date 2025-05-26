/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 20:45:40 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/26 21:02:50 by oazlan           ###   ########.fr       */
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
// int	main(void)
// {
// 	char dest[50] = "Hello";
// 	char src[] = ", wonderful world!";
// 	unsigned int nb = 10;

// 	printf("\nBEFORE:\n");
// 	printf("Source      = '%s'\n", src);
// 	printf("Destination = '%s'\n", dest);
// 	printf("\nNumber of characters to concatenate: %u\n", nb);
	
// 	ft_strncat(dest, src, nb);
	
// 	printf("\nAFTER:\n");
// 	printf("Source      = '%s'\n", src);
// 	printf("Destination = '%s'\n", dest);
	
// 	printf("\n");
	
// 	return (0);
// }