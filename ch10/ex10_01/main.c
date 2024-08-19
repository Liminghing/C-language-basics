//
//  main.c
//  ex10_01
//
//  Created by 임준형 on 8/19/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ary[3];
    int  i ;
    
    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) +10;
    
    printf("세번째 배열 요소를 키보드로 입력 :");
    scanf("%d",(ary+2));
    
    for(i = 0 ; i < 3 ; i++){
        
        printf("%5d",*(ary+i));
    }
    return 0;
}
