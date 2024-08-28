//
//  main.c
//  ex17_05
//
//  Created by 임준형 on 8/26/24.
//

#include <stdio.h>
struct vision
{
    double left;
    double right;
};

struct vision exchange(struct vision);

int main(int argc, const char * argv[]) {
    struct vision robot;
    
    printf("시력 입력 : ");
    scanf("%lf%lf",&(robot.left),&(robot.right));
    robot = exchange(robot);
    printf("바뀐 시력 : %.1lf %.1lf\n",robot.left,robot.right);
    
    return 0;
}
struct vision exchange(struct vision robot){
    double temp;
    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;
    
    return robot;
}
