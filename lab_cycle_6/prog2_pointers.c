#include <stdio.h>

int main()
{
	int var = 10;				// var is variable storing integer value 10 
	printf("Value of var: %d\n\n", var);

	int *ptr;				// ptr is a pointer variable to integer
	ptr = &var;				// assign address of 'var' to 'ptr'

	printf("The memory address of var (in HEX): %x\n", &var);
	printf("ptr is pointing to memory address (in HEX): %x\n", ptr);
	printf("Content of memory address pointed by ptr: %d\n\n", *ptr);

	int **dptr;				// dptr is a pointer to a pointer variable ptr
	dptr = &ptr;				// assign address of 'ptr' to 'dptr'

	printf("The memory address of ptr (in HEX): %x\n", &ptr);
	printf("dptr is pointing to memory address (in HEX): %x\n", dptr);
	printf("Content of memory address pointed by dptr (in HEX): %x\n", *dptr);
	printf("Content in memory address pointed by content of dptr: %d\n\n", **dptr);

	return 0;
}
