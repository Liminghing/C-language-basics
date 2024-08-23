//
//  main.c
//  ex12_12
//
//  Created by 임준형 on 8/24/24.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char str1[80]="pear";
    char str2[80]="peach";
    
    printf("사전에 나중에 나오는 과일 이름 : ");
    
    if(strcmp(str1,str2) > 0){
        printf("%s\n",str1);
    }else{
        printf("%s\n",str2);
    }
    return 0;
}
