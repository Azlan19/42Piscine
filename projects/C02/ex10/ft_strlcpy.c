/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:44:36 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/18 17:37:59 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The strlcpy() function copies and concatenates strings with the same input
	parameters and output result as snprintf(3).

	strlcpy() takes the full size of the destination buffer and guarantees
	NUL-termination if there is room.  Note that room for the NUL should be
	included in dstsize.

	strlcpy() copies up to dstsize - 1 characters from the string src to dst,
	NUL-terminating the result if dstsize is not 0.

	If the src and dst strings overlap, the behavior is undefined.

	Like snprintf(3), the strlcpy() function returns the total length of the
	string it tried to create.  For strlcpy() that means the length of src.

	If the return value is >= dstsize, the output string has been truncated.
	It is the caller's responsibility to handle this.*/

// #include <stdio.h>

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

// i = 0;
// while (dest[i] != '\0')
// {
// 	printf("%c", dest[i]);
// 	i++;
// }
// printf("\n");

// int	main(void)
// {
// 	char	*word;
// 	char	dest[5];

// 	word = "Hello, World!";
// 	printf("%d\n", ft_strlcpy(dest, word, 5));
// 	return (0);
// }
