#ifndef MAIN_H_
#define MAIN_H_

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct convert - Entry point
 *
 * Description: Defines a structure for symbols and functions
 *
 * @sym: The operator
 * @f: The function associated
 */

struct convert
{

	char *sym;
	int (*f)(va_list);

};
typedef struct convert con_vert;


int _putchar(char);
int parser(const char *format, con_vert f_list[], va_list arg_list);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);

#endif /*MAIN_H_*/
