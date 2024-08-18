//
//  main.c
//  ex09_09
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>
void swap(int x,int y);
int main(int argc, const char * argv[]) {
    int a = 10,b =20;
    swap(a,b);
    printf("a : %d, b : %d\n",a,b);
    
    return 0;
}
void swap(int x,int y){
    int temp;
    
    temp = x;
    x = y;
    y =temp;
    
}
