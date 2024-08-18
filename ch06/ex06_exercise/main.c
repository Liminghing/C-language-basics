//
//  main.c
//  ex06_exercise
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number;
    int count = 0;
    printf("2이상의 정수를 입력하세요 : ");
    scanf("%d",&number);
    for(int i = 2; i < number; i++){
        int j;
        for(j = 2 ; j < i; j++){
            if(i%j==0) break;
        }
        if(i == j){
            printf("%5d",i);
            count++;
            if(count%5==0)printf("\n");
        }
    }
    return 0;
}
