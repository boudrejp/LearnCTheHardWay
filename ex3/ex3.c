/* this will include our standard io elements for printing */
#include <stdio.h>

/* define main procedure for program */
int main(int argc, char **argv[])
{
	int age = 11;
	int height = 72;
	char print_string[25] = "Something to print";

	printf("I am %d years old.\n", age);
	// note that strings are kinda counterintuitive
	 printf("I am %d inches tall.\n", height);

	// test printing something with character
	// printf("%c", print_string);
	return 0;
}


