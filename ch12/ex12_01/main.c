//
//  main.c
//  ex12_01
//
//  Created by 임준형 on 8/19/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    printf("apple이 저장된 시작 주소 값 : %p\n","apple");
    printf("두번째 문자의 주소값 : %p\n","apple"+1);
    printf("첫번째 문자 : %c\n",*"apple");
    printf("두번째 문자 : %c\n",*("apple"+1));
    printf("세번재 문자 : %c\n","apple"[2]);
    return 0;
}
