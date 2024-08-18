//
//  main.c
//  ex09_05
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char ch;
    int in;
    double db;
    
    char *pc = &ch;
    int *pi = &in;
    double *pd = &db;
    
    printf("char형 변수의 주소 크기 : %d\n",sizeof(&ch));
    printf("int형 변수의 주소 크기 : %d\n",sizeof(&in));
    printf("double형 변수의 주소 크기 : %d\n\n",sizeof(&db));
    
    printf("char *포인터의 크기 : %d\n",sizeof(pc));
    printf("int *포인터의 크기 : %d\n",sizeof(pi));
    printf("double *포인터의 크기 : %d\n\n",sizeof(pd));
    
    printf("char *포인터가 가리키는 변수의 크기 : %d\n",sizeof(*pc));
    printf("int *포인터가 가리키는 변수의 크기 : %d\n",sizeof(*pi));
    printf("double *포인터가 가리키는 변수의 크기 : %d\n",sizeof(*pd));
    return 0;
}
