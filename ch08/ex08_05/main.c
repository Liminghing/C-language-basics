//
//  main.c
//  ex08_05
//
//  Created by 임준형 on 8/18/24.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char str1[80] = "cat";
    char str2[80];
    
    strcpy(str1 , "tiger");
    strcpy(str2,str1);
    printf("%s, %s\n",str1,str2);
    return 0;
}
