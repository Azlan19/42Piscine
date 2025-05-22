/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 19:38:32 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/17 17:35:00 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The strlcat() functions copy and concatenate strings with the same input
	parameters and output result as snprintf(3).

	strlcat() takes the full size of the destination buffer and guarantees
	NUL-termination if there is room. Note that room for the NUL should be
	included in dstsize.

	strlcat() appends string src to the end of dst. It will append at most
	dstsize - strlen(dst) - 1 characters. It will then NUL-terminate, unless
	dstsize is 0 or the original dst string was longer than dstsize (in practice
	this should not happen as it means that either dstsize is incorrect or that
	dst is not a proper string).

	If the src and dst strings overlap, the behavior is undefined.

	strlcat() functions return the total length of the string they tried to
	create. For strlcat() that means the initial length of dst plus the length
	of src.

	If the return value is >= dstsize, the output string has been truncated. It
	is the caller's responsibility to handle this.*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
	{
		return (src_len + size);
	}
	i = 0;
	while (src[i] != '\0' && i + dest_len < (size - 1))
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[i + dest_len] = '\0';
	return (dest_len + src_len);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*word;
// 	char	*dest;

// 	dest = "1337 42";
// 	word = "Born to code";
// 	printf("%d\n", ft_strlcat(dest, word, 5));
// 	printf("%s\n", dest);
// 	return (0);
// }
