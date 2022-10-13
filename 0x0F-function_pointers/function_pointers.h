#ifndef FUNPOINT_H_
#define FUNPOINT_H_ "function_pointers.h"

void print_name_uppercase(char *name);
void print_name_as_is(char *name);
void print_name(char *name, void (*f)(char *));


#endif
