#include <stdio.h>

int main() {

	int array[] = {1, 2, 3, 4, 5};

	int len = sizeof(array)/sizeof(int);

	printf("length is %d\n", len);

	return 0;
}
