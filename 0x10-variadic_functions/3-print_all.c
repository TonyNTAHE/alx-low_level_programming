#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function.
 * Return:nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int n;
	char c;
	float f;
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
					c = va_arg(args, int);
					printf("%s%c", sep,  c);
					break;
				case 'i':
					n = va_arg(args, int);
					printf("%s%d", sep, n);
					break;
				case 'f':
					f = va_arg(args, double);
					printf("%s%f", sep, f);
					break;
				case 's':
					s =  va_arg(args, char *);
					if (s == NULL)
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
