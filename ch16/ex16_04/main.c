//
//  main.c
//  ex16_04
//
//  Created by 임준형 on 8/26/24.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    char temp[80];
    char *str[3];
    int i;
    for(i = 0 ; i < 3 ; i++){
        printf("문자열을 입력하세요 " );
        gets(temp);
        str[i] = (char *)malloc(strlen(temp)+1);
        strcpy(str[i],temp);
    }
    for(i = 0 ; i < 3 ; i++){
        printf("%s\n",str[i]);
    }
    for(i = 0 ; i < 3 ; i++){
        free(str[i]);
    }
    return 0;
}
