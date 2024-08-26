//
//  main.c
//  ch15_exercise
//
//  Created by 임준형 on 8/27/24.
//

#include <stdio.h>
#include <string.h>
void swap(char *,void **,void **);
int main(int argc, const char * argv[]) {
    void *a;
    void *b;
    
    int age1;
    int age2;
    double height1;
    double height2;
    
    printf("첫 번째 사람의 나이와 키 입력 : ");
    scanf("%d%lf",&age1,&height1);
    getchar();
    printf("두 번째 사람의 나이와 키 입력 : ");
    scanf("%d %lf",&age2,&height2);
    a = &age1;
    b = &age2;
    swap("int",&a,&b);
    a = &height1;
    b = &height2;
    swap("double",&a,&b);
    printf("첫 번째 사람의 나이와 키  : %d, %.1lf\n",age1,height1);
    printf("두 번째 사람의 나이와 키  : %d, %.1lf\n",age2,height2);
    return 0;
}
void swap(char *pc,void **vp1,void **vp2){
    
    if(strcmp(pc,"int") == 0){
        int temp =*(int *)(*(int **)vp1);
        *(int *)(*(int **)vp1) = *(int *)(*(int **)vp2);
        *(int *)(*(int **)vp2) = temp;
        
    }else if(strcmp(pc,"double") == 0){
        double temp =*(double *)(*(double **)vp1);
        *(double *)(*(double **)vp1) = *(double *)(*(double **)vp2);
        *(double *)(*(double **)vp2) = temp;
    }
}
