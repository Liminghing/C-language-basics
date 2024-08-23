//
//  main.c
//  ex12_11
//
//  Created by 임준형 on 8/24/24.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char str1[80],str2[80];
    char *resp;
    
    printf("2개의 과일 이름 입력 : ");
    scanf("%s %s",str1,str2);
    if(strlen(str1) > strlen(str2)){
        resp = str1;
    }else{
        resp = str2;
    }
    printf("이름이 긴 과일은 : %s\n",resp);
    return 0;
}
