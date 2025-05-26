/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:25:17 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/26 20:59:25 by oazlan           ###   ########.fr       */
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
// int	main(void)
// {
// 	char dest[50] = "Hello";
// 	char src[] = ", world!";
	
// 	printf("\nBEFORE:\n");
// 	printf("Source      = '%s'\n", src);
// 	printf("Destination = '%s'\n", dest);
	
// 	ft_strcat(dest, src);
	
// 	printf("\nAFTER:\n");
// 	printf("Source      = '%s'\n", src);
// 	printf("Destination = '%s'\n", dest);
	
// 	printf("\n");
	
// 	return (0);
// }