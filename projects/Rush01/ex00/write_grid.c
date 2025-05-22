#include <unistd.h>

void write_grid(char *array)
{
	int i;

	i = 0;
	while (array[i] != '\0')
	{
		write(1, &array[i], 1);
		write(1, " ", 1);
		if (i % 4 == 3)
		{
			write(1, "\n", 1);
		}
		i++;
	}
}

// int main()
// {
// 	char *string = "1412313423211321";
// 	write_grid(string);

// 	return 0;
// }
