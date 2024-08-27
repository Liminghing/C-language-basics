//
//  main.c
//  ex16_03
//
//  Created by 임준형 on 8/26/24.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int *pi;
    int size = 5;
    int count = 0;
    int num;
    int i;
    pi = (int *)calloc(size,sizeof(int)); //5개 공간 할당
    while(1){
        printf("양수만 입력하세요 => ");
        scanf("%d",&num);
        if(num <= 0 ) break; //음수 입력시 종료
        if(count == size){ //5개 이상 입력시
            size += 5;  // 사이즈 5개 추가
            pi = (int *)realloc(pi,size*sizeof(int));
        }
        pi[count++] = num;
    }
    for(i = 0; i < count ; i++){
        printf("%5d",pi[i]);
    }
    free(pi);
    return 0;
}
