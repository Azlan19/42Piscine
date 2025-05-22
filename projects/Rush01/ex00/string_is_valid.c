#include <stdio.h>

int length_checker(char *new_array);
int value_checker(char *new_array);
char *remove_spaces(char *str);

int string_is_valid(char *str)
{
	char *new_array;

	new_array = remove_spaces(str);

	if (length_checker(new_array) && value_checker(new_array))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
