#include<stdio.h>

double df(int x, int y){
	return x*y*3.14;
} 

main(){
	int x,y;
	double z;
	
	printf("정수 x의 값 입력 : ");
	scanf("%d", &x);
	
	printf("정수 y의 값 입력 : ");
	scanf("%d", &y);
	
	z= df(x,y);
	printf("z의 값은 : %f\n", z); 
}
