#include <stdio.h>

int minus(int x, int y);

main(){
	int x = 10, y = 20;
	int result;
	
	result = minus(x,y);
	printf("%d - %d = %d\n", x, y, result);
}

int minus(int x, int y){
	return x - y;
}
