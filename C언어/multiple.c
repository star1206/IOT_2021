#include <stdio.h>

main() {
	int a;
	
	printf("당신이 좋아하는 과일은 무엇인가요? 아래 번호를 선택해주세요.\n");
	printf("사과=1, 키위=2, 복숭아=3, 수박=4, 모두 좋아하지 않는다=0\n");
	printf("선택한 번호를 입력해주세요 : ");
	scanf("%d", &a); 
	
	if(a == 1) 
			printf("당신은 사과를 좋아하시는군요!\n");
	else if(a == 2)
		printf("당신은 키위를 좋아하시는군요!\n");
	else if(a == 3)
		printf("당신은 복숭아를 좋아하시는군요!\n");
	else if(a == 4)
		printf("당신은 수박을  좋아하시는군요!\n");
	else
		printf("당신은 아마도 과일을 별로 좋아하지 않는 것 같군요!\n"); 
	
} 



