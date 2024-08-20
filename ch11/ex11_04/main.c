//
//  main.c
//  ex11_07
//
//  Created by 임준형 on 8/19/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num,grade;
    
    printf("학번입력 : ");
    scanf("%d",&num);
    getchar();
    printf("학점입력 :");
    grade = getchar();
    printf("학번 : %d,학점 : %c",num,grade);
    return 0;
}
