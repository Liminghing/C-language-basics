//
//  main.c
//  ex03_11
//
//  Created by 임준형 on 8/17/24.
//

#include <stdio.h>

int main(void) {
    
    char grade;
    char name[20];
    
    printf("학점입력 :");
    scanf("%c",&grade);
    
    getchar();//잔여버퍼 제거
    
    printf("이름입력 :");
    scanf("%s",name);
    
    printf("%s의 학점은 %c\n",name,grade);
    return 0;
}

