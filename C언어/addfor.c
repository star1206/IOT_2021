#include <stdio.h>

main(){
	int i;
	int sum = 0;
	
	for (i=1;i<=2019;i++){
		sum += i;
	}
	printf("1에서 2019까지의 합은 %d\n", sum);
}
