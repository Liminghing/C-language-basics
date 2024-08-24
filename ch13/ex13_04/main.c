//
//  main.c
//  ex13_04
//
//  Created by 임준형 on 8/24/24.
//

#include <stdio.h>

void auto_func(void);
void static_func(void);

int main(int argc, const char * argv[]) {
    int i ;
    printf("일반 지역 변수(auto)를 사용한 함수,,,\n");
    for(i = 0 ; i < 3 ; i++){
        auto_func();
    }
    printf("정적 지역 변수(static)를 사용한 함수...\n");
    for(i = 0 ; i < 3 ; i++){
        static_func();
    }
    return 0;
}
void auto_func(void){
    auto int a = 0;
    a++;
    printf("%d\n",a);
}
void static_func(void){
    static int a;
    a++;
    printf("%d\n",a);
}
