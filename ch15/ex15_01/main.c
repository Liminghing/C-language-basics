//
//  main.c
//  ex15_01
//
//  Created by 임준형 on 8/25/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 10 ;
    int *pi;
    int **ppi;
    pi = &a;
    ppi = &pi;
    
    printf("----------------------------------------\n");
    printf("변수.     변숫값.      &연산.     *연산.     **연산\n");
    printf("a%12d%12u\n",a,&a);
    printf("pi%12u%12u%12d\n", pi, &pi, *pi);
    printf("ppi%12u%12u%12u%12u\n", ppi, &ppi, *ppi, **ppi);
    printf("----------------------------------------\n");
    return 0;
}
