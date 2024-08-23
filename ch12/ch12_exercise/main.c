//
//  main.c
//  ch12_exercise
//
//  Created by 임준형 on 8/27/24.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char word01[20];
    char word02[20];
    char word03[20];
    printf("세 단어 입력 : ");
    scanf("%s %s %s",word01,word02,word03);
    char temp[20];
    if(strcmp(word01,word02) > 0){
        strcpy(temp,word01);
        strcpy(word01,word02);
        strcpy(word02,temp);
    }
    if(strcmp(word01,word03) > 0 ){
        strcpy(temp,word01);
        strcpy(word01,word03);
        strcpy(word03,temp);
    }
    if(strcmp(word02,word03) > 0){
        strcpy(temp,word02);
        strcpy(word02,word03);
        strcpy(word03,temp);
    }
    printf("%s, %s, %s\n",word01,word02,word03);
    return 0;
}
