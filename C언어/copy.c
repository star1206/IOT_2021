#include <stdio.h>

main() {
	int a[5] = {1,2,3,4,5};
	int b[5];
	int i;
	
	for(i=0;i<5;i++){
		b[i] = a[i];
		printf("a[%d] = %d b[%d] = %d\n", i, a[i], i, b[i]);
	}
}   
