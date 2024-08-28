//
//  main.c
//  ex17_12
//
//  Created by 임준형 on 8/26/24.
//

#include <stdio.h>

struct student
{
    int num;
    double grade;
};

typedef struct student Student;
void print_data(Student *);

int main(int argc, const char * argv[]) {
    Student s1 = {315,4.2};
    print_data(&s1);
    return 0;
}
void print_data(Student *ss){
    printf("학번 : %d\n",ss->num);
    printf("학점 : %.1lf\n",(*ss).grade);
}
