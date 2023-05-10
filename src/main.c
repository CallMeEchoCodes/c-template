#include <stdio.h>
#include "./foo.h"

#ifndef VERSION
#define VERSION "N/A"
#endif

int main() {
	printf("Hello, World!\n");
	printf("version %s\n", VERSION);
#ifdef DEBUG
	printf("Running from debug\n");
#endif
#ifdef RELEASE
	printf("Running from release\n");
#endif
	foo();
	return 0;
}
