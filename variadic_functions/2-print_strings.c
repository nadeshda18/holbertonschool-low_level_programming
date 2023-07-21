#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings
 * @separator: string to be printed between the strings
 * @n: constant unsigned integer
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);
		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}


