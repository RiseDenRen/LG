#include <stdio.h>
#include <stdarg.h>
#include "mylib.h"

int eprintf (const char* format, ...) {
	va_list args;
	va_start (args, format);

	fflush (nullptr);
	int result = vfprintf (stderr, format, args);

	va_end (args);
	return result;
}
