#include <stdio.h>
#include <iostream>
#include "mylib.h"

int main ()
{
	if (printf ("Hello world\n") != 12)
		return 1;	

	eprintf ("No error!!!\n");
	
	std::cout << "Really?) cout?)))" << std::endl;

	return 0;
}
