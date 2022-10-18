#include "main.h"

/**
 * _printf - Entry point
 *
 * @format: A string containing all the desired characters
 *
 * Description: Receives the main string and all the necessary parameters to
 * print a formated string
 *
 * Return: A total count of the characters printed
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	con_vert f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	/*Calling parser function*/
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
