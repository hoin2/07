#include <stdio.h>
#include <stdlib.h>

static all_files;

extern void sub();

int main(void) {
	sub();
	printf("%d\n",all_files);
	return 0;
}

