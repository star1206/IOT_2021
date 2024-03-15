#include<stdio.h>

main(){
	int a;
	
	printf("하나의 정수를 입력하세요 : ");
	scanf("%d", &a);
	
	if (a % 2) {
		printf("홀수입니다.\n");
	} else {
		printf("짝수입니다.\n");
	}
}
