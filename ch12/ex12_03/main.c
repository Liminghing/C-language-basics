//
//  main.c
//  ex12_03
//
//  Created by 임준형 on 8/19/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char str[80];
    
    printf("문자열 입력 :");
    scanf("%s",str);
    printf("첫번째 단어 : %s\n",str);
    scanf("%s",str);
    printf("버퍼에 남은 두번째 단어 : %s\n",str);
    return 0;
}
