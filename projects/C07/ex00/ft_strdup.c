/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 14:10:32 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/28 13:14:18 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	ptr = (char *)malloc((i * sizeof(char)) + 1);
	i = 0;
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *src = "Hello, World";
// 	char *copy;

// 	printf("\n");
// 	printf("Original string   = '%s'\n", src);
	
// 	copy = ft_strdup(src);
	
// 	if (copy != NULL)
// 	{
// 		printf("Duplicated string = '%s'\n", copy);
// 		free(copy);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
	
// 	printf("\n");
	
// 	return 0;
// }
