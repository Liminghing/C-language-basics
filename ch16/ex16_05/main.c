//
//  main.c
//  ex16_05
//
//  Created by 임준형 on 8/26/24.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_str(char **);
int main(int argc, const char * argv[]) {
    char temp[80];
    char *str[21] = {0};
    int i = 0 ;
    while(i<20){
        printf("문자열을 입력하세요 :");
        gets(temp);
        if(strcmp(temp,"end")==0) break;
        str[i] = (char *)malloc(strlen(temp)+1);
        strcpy(str[i],temp);
        i++;
    }
    print_str(str);
    for(i = 0 ; str[i] != NULL;i++){
        free(str[i]);
    }
    return 0;
}
void print_str(char **ps){
    int i = 0;
    //while(ps[i] !=NULL){
    //    printf("%s\n",ps[i]);
    //    i++;
    //}
    while(*ps !=NULL){
        printf("%s\n",*(ps));
        ps++;
    }
}
