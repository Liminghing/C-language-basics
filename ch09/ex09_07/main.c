//
//  main.c
//  ex09_07
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>
void swap(int *pa,int *pb);
int main(int argc, const char * argv[]) {
    int a = 10,b = 20;
    
    swap(&a,&b);
    printf("a : %d, b : %d\n",a,b);
    
    return 0;
}
void swap(int *pa,int *pb){
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    
}
