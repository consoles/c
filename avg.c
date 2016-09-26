#include <stdio.h>

int main(int argc, char const *argv[]){
	int count,sum;
	scanf("%d %d",&sum,&count);
	float avg = sum * 1.0 / count;
	printf("avg = %f\n", avg);
	return 0;
}