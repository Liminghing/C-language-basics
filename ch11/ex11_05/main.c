//
//  main.c
//  ex11_05
//
//  Created by 임준형 on 8/19/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char ch;
    int i;
    for(i = 0 ; i < 3 ; i++){
        scanf("%c",&ch);
        printf("%c",ch);
    }
    printf("\n");
    fflush(stdin);
    for(i = 0 ; ; i++){
        scanf("%c",&ch);
        if(ch == '\n') break;
        printf("%c",ch);
    }
    return 0;
}
