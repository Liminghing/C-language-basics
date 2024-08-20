//
//  main.c
//  ex11_06
//
//  Created by 임준형 on 8/19/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int res;
    char ch;
    while(1){
        res = scanf("%c",&ch);
        if(res == -1) break;
        printf("%d ",ch);
    }
    return 0;
}
