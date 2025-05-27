/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 12:18:37 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/27 16:18:16 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	int limit = 15;
// 	int i;
	
// 	printf("\nFIBONACCI SEQUENCE UP TO %dth element:\n\n", limit);
	
// 	i = 0;
// 	while (i < limit)
// 	{
// 		printf("%d", ft_fibonacci(i));
// 		i++;
// 		if (i != limit)
// 		{
// 			printf(", ");
// 		} 	
// 	}
		
// 	printf("\n\n");

// 	return 0;
// }
