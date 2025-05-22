#include <stdio.h>

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

int length_checker(char *new_array)
{
	int size;

	size = ft_strlen(new_array);

	if (size == 16)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int value_checker(char *new_array)
{
	int i;

	i = 0;
	while (new_array[i] != '\0')
	{
		if (new_array[i] < '1' || '4' < new_array[i])
		{
			return 0;
		}
		i++;
	}

	return 1;
}

char *remove_spaces(char *str)
{
	int i;
	int j;
	static char new_array[16];

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			new_array[j] = str[i];
			j++;
		}
		i++;
	}
	new_array[i] = '\0';

	return new_array;
}

// int main()
// {
// 	char string[] = "1 2 3 4 4 3 2 1 4 1 2 3 1 4 1 4";
// 	printf("%s\n", remove_spaces(string));
// 	printf("Value return: %d\n", value_checker(remove_spaces(string)));
// 	printf("Length return: %d\n", length_checker(remove_spaces(string)));

// 	return 0;
// }
