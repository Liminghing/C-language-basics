//
//  main.c
//  ex06_05
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int  i;
    int sum = 0;
    for(i = 1; i <= 10; i++){
        
        sum +=i;
        if(sum > 30) break;
    }
    printf("누적한 값 : %d\n",sum);
    printf("마지막으로 더한 값 : %d\n",i);
    return 0;
}
