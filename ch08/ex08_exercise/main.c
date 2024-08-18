//
//  main.c
//  ex08_exercise
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    char str[80];
    printf("문장 입력 : ");
    
    gets(str);
    
    int i=0,count = 0;
    while(str[i] != '\0'){
        if(('A' <= str[i])&&(str[i] <= 'Z')){
            str[i] = str[i] + ('a' - 'A');
            count++;
        }
        i++;
    }
    printf("바뀐 문장 : %s\n",str);
    printf("바뀐 문자 수 : %d\n",count);
    return 0;
}
