#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
/**
 *struct get_format -main entry.
 *@p_type: pointer to a char
 *@func: pointer to a function
 *Description:getfunction compare operator type and invoke the correct function
 **/

typedef struct get_format
{
	char *p_type;
	void (*func)();

} get_format;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);



#endif /*_VARIADIC_FUNCTIONS_H_*/
