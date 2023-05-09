#include <stdio.h>
#include "./foo.h"

int main() {
	printf("Hello, World!\n");
#ifdef DEBUG
	printf("Running from debug\n");
#endif
#ifdef RELEASE
	printf("Running from release\n");
#endif
	foo();
	return 0;
}
