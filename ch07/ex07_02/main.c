//
//  main.c
//  ex07_02
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>
int get_num(void);
int main(int argc, const char * argv[]) {
    int result;
    
    result =get_num();
    printf("반환값 : %d\n",result);
    return 0;
}
int get_num(void){
    int num;
    printf("양수 입력 : ");
    scanf("%d",&num);
    
    return num;
    
}
