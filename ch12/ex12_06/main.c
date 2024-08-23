//
//  main.c
//  ex12_06
//
//  Created by 임준형 on 8/19/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int  age;
    char name[20];
    
    printf("나이 입력 : ");
    scanf("%d",&age);
    printf("이름 입력 : ");
    gets(name);
    printf("나이 : %d, 이름 : %s\n",age,name);
    return 0;
}
