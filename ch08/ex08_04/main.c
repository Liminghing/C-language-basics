//
//  main.c
//  ex08_04
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char str[80] = "applejam";
    
    printf("최초 문자열 : %s\n",str);
    printf("문자열 입력 :");
    scanf("%s",str);
    printf("입력 후 문자열 : %s\n",str);
    return 0;
}
