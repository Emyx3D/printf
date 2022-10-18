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

int _puts(char *string);
int printstr(char *format, va_list);
int (*driver(char *format))(char *format, va_list);
int printint(char *format, va_list pa);
int integer(int number);
int contadordigit(int number);
int _abs(int number);
int printpercent(char *format, va_list pa);
int printhex(char *format, va_list);
int printHEX(char *format, va_list);
int printocta(char *format, va_list);
int print_unsign(char *format, va_list);

#endif /*MAIN_H_*/
