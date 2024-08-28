//
//  main.c
//  ex17_04
//
//  Created by 임준형 on 8/26/24.
//

#include <stdio.h>
struct student
{
    int id;
    char name[20];
    double grade;
};
int main(int argc, const char * argv[]) {
    struct student s1 ={311,"홍길동",4},
    s2 ={312,"이순신",2},
    s3 ={313,"세종대왕",3};
    
    struct student max;
    
    max = s1;
    if(s2.grade > max.grade) max = s2;
    if(s3.grade > max.grade) max = s3;
    
    printf("학번 : %d\n",max.id);
    printf("이름 : %s\n",max.name);
    printf("학점 : %.1lf\n",max.grade);
    return 0;
}
