/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:30:43 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/21 17:58:50 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isspace(char c)
{
	int	TRUE;
	int	FALSE;

	TRUE = 1;
	FALSE = 0;
	if (c == ' ' || c == '\t' || c == '\n' || c == ' ' || c == '\0')
	{
		return (FALSE);
	}
	return (TRUE);
}

static int	r_size(char *s)
{
	unsigned int	len;

	len = 0;
	while (*s)
	{
		if (ft_isspace(*s))
			++s;
		else
		{
			++len;
			while (*s && !ft_isspace(*s))
				++s;
		}
	}
	return (len);
}

char	**ft_split(char *s)
{
	int		i;
	int		j;
	int		k;
	char	**r;
	int		w_len;

	i = 0;
	j = 0;
	w_len = 0;
	if (!(r = (char **)malloc(sizeof(char *) * (r_size(s) + 1))))
		return (0);
	while (s[i] && j < r_size(s))
	{
		while (s[i] && ft_isspace(s[i]))
			i++;
		while (s[i] && !ft_isspace(s[i]))
		{
			w_len++;
			i++;
		}
		if (!(r[j] = (char *)malloc(sizeof(char) * (w_len + 1))))
			return (0);
		k = 0;
		while (w_len)
			r[j][k++] = s[i - w_len--];
		r[j++][k] = '\0';
	}
	return (r);
}

#include <stdio.h>

int	main(void)
{
	char *sentence = "        s   Hi how are you    \n my name is \n t   \n   g  ";

	printf("number of words = %d\n", ft_countwords(sentence));

	return (0);
}