#include <stdio.h>
#include "max.h"
#include "min.h"

int main(int argc,char* argv[]){
    int num1 = 22;
    int num2 = 33;
    int maxNum = max(num1,num2);
    int minNum = min(num1,num2);
    printf("The min = %d\tand the max = %d\n",minNum,maxNum);
    printf("参数长度 = %d\n", argc);
    for (int i = 0; i < argc; ++i){
    	printf("argv[%d] = %s\n",i,argv[i] );
    }
    return 0;
}
