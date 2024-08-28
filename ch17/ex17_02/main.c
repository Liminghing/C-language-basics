//
//  main.c
//  ex17_02
//
//  Created by 임준형 on 8/26/24.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct profile
{
    char name[20];
    int age;
    double height;
    char *intro;
};

int main(int argc, const char * argv[]) {
    struct profile yuri;
    strcpy(yuri.name,"서하윤");
    yuri.age = 17;
    yuri.height = 170.5;
    yuri.intro = (char *)malloc(80);
    printf("자기소개 : ");
    scanf("%s",yuri.intro);
    
    printf("이름 : %s\n",yuri.name);
    printf("나이 : %d\n",yuri.age);
    printf("키 : %.1lf\n",yuri.height);
    printf("자기소개 : %s\n",yuri.intro);
    free(yuri.intro);
    
    return 0;
}
