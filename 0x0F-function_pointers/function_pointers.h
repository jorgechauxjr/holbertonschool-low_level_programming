#ifndef _FUNC_POINTERS_
#define _FUNC_POINTERS_

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* _FUN_POINTERS_ */
