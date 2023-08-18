#include "variadic_functions.h"

/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int flg;
	char *s;
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				flg = 0;
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				flg = 0;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				flg = 0;
				break;
			case 's':
				s = va_arg(ap, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				flg = 0;
				break;
			default:
				flg = 1;
				break;
		}
		if (format[i + 1] != '\0' && flg == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
