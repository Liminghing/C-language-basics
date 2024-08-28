//
//  main.c
//  ex17_01
//
//  Created by 임준형 on 8/26/24.
//

#include <stdio.h>
struct student
{
    int num;
    double grade;
};

int main(int argc, const char * argv[]) {
    
    struct student s1;
    s1.num = 2;
    s1.grade = 3.5;
    printf("학번 : %d\n",s1.num);
    printf("학점 : %.1lf\n",s1.grade);
    
    return 0;
}
