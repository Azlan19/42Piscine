#include <unistd.h>

#include <stdio.h>

int string_is_valid(char *str);
char *remove_spaces(char *str);
void write_grid(char *array);

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	if (argc != 2)
	{
		write(1, "Error", 6);
		write(1, "\n", 1);
		return 0;
	}
	// ./a.out "2 3 4 5 6 7 8 9 0"

	char *new_array = remove_spaces(argv[1]);


	if (string_is_valid(argv[1]))
	{
		printf("This works\n");
		write_grid(new_array);
	}
	else
	{
		write(1, "Error", 6);
		write(1, "\n", 1);
		return 0;
	}

	write(1, "\n", 1);
	return 0;

}
