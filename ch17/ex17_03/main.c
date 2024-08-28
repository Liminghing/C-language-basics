//
//  main.c
//  ex17_03
//
//  Created by 임준형 on 8/26/24.
//

#include <stdio.h>

struct profile
{
    int age;
    double height;
};
struct student
{
    struct profile pf;
    int id;
    double grade;
};
int main(int argc, const char * argv[]) {
    struct student yuri;
    
    yuri.pf.age = 17;
    yuri.pf.height = 170.1;
    yuri.id = 315;
    yuri.grade = 3.4;
    
    printf("나이 : %d\n",yuri.pf.age);
    printf("키 : %.1lf\n",yuri.pf.height);
    printf("학번 : %d\n",yuri.id);
    printf("학점 : %.1lf\n",yuri.grade);
    return 0;
}
