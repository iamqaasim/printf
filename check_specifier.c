/**
 * check_specifier - check that character is a valid specifier and 
 * assign an appropriate function for it
 * @format: the specifier (char*)
 *
 * Return: pointer to a function
 */
 
int (*check_specifier(char *format))(va_list)
{
	int i;

	func_t my_array[4] = 
	{
		{'c', print_char},
		{'s', ptint_str},
		{'%', print_cent},
		{NULL, NULL}
	};

	for (i = 0; my_array[i}.t != NULL; i++)
	{
		if (my_array[i].t == *format)
		{
			return (my_array[i].f);
		}
	}
	return (NULL);
}
