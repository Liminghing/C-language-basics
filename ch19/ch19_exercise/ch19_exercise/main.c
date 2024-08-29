//
//  main.c
//  ch19_exercise
//
//  Created by 임준형 on 8/28/24.
//

#include <stdio.h>
#define INPUT scanf("%d %c %d",&a,&order,&b)
#define OUTPUT printf("%d %c %d = %d\n",a,order,b,result)

#define SUM(a,b) ((a)+(b))
#define SUB(a,b) ((a)-(b))
#define MUL(a,b) ((a)*(b))
#define DIV(a,b) ((a)/(b))

int main(int argc, const char * argv[]) {
    int res = 0;
    int a,b,result;
    char order;
    
    while(res != -1){
        printf("수식 입력(종료 Ctrl+Z) : ");
        res = INPUT;
        if(res == -1) break;
        switch (order) {
            case '+':
                result = SUM(a,b);
                break;
            case '-':
                result = SUB(a,b);
                break;
            case '*':
                result = MUL(a,b);
                break;
            case '/':
                result = DIV(a,b);
                result = DIV(a,b);
                break;
        }
        OUTPUT;
    }
    
    
    return 0;
}
