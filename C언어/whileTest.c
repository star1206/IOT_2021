#include <stdio.h>

main(){
	int i;
	int sum = 0;
	
	while(i<=2019){
		sum += i;
		i++;
	}
	printf("1에서 2019까지의 합은 %d\n", sum);
}
