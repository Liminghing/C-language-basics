//
//  main.c
//  ex08_06
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>
#include <string.h>
#define _CRT_NO_WARNINGS

int main(int argc, const char * argv[]) {
    char str[80];
    
    printf("문자열 입력 : ");
    gets(str);
    puts("입력된 문자열 : ");
    puts(str);
    return 0;
}
