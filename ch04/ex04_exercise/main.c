//
//  main.c
//  ex04_exercise
//
//  Created by 임준형 on 8/17/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double weight,height;
    double bmi;
    
    printf("몸무게(kg)와 키(cm) 입력 : ");
    scanf("%lf %lf",&weight,&height);
    height *=0.01;
    bmi = weight / (height*height);
    printf(((20.0 <= bmi)&&(bmi<=25.0)) ? "표준입니다\n":"체중관리가 필요합니다\n");
    
    return 0;
}
