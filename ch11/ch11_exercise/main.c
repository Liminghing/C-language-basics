//
//  main.c
//  ch11_exercise
//
//  Created by 임준형 on 8/27/24.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char str[1000];
    int res,max = 0;
    do {
        res = scanf("%s",str);
        if(strlen(str) > max) {
            max = strlen(str);
        }
    } while (res != -1);
    printf("가장 긴 단어의 길이 : %d\n",max);
    return 0;
}
