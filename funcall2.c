#include<stdio.h>

double df(int x, int y){
	return x*y*3.14;
} 

main(){
	int x,y;
	double z;
	
	printf("���� x�� �� �Է� : ");
	scanf("%d", &x);
	
	printf("���� y�� �� �Է� : ");
	scanf("%d", &y);
	
	z= df(x,y);
	printf("z�� ���� : %f\n", z); 
}
