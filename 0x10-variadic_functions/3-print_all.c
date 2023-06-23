#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function.
 * Return:nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *sep = "";
	int i = 0;
	char *s;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep,  va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					s =  va_arg(args, char *);
					if (!s)
					{
						printf("(nil)");
					}
					else
						printf("%s%s", sep, s);
					break;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
