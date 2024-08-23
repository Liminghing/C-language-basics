//
//  main.c
//  ex12_05
//
//  Created by 임준형 on 8/19/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char str[80];
    
    printf("공백이 포함된 문자열 입력 : ");
    fgets(str,sizeof(str),stdin);
    printf("입력된 문자열은 %s입니다.",str);
    return 0;
}
