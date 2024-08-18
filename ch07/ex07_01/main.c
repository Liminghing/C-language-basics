//
//  main.c
//  ex07_01
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>
int sum(int a,int b);

int main(int argc, const char * argv[]) {
    int a = 10,b = 20;
    int result;
    
    result = sum(a,b);
    printf("result : %d\n",result);
    
    return 0;
}
int sum(int a,int b){
    int temp;
    temp = a + b;
    return temp;
    
}
