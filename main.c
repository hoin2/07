#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i=10;
	printf("�Լ� ȣ���� i=%d\n",i);
	inc(i);
	printf("�Լ� ȣ���� i=%d\n",i);
	return 0;
}

int inc(int counter){
	counter++;
	return counter;
}
